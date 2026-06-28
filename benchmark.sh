#!/bin/bash

# M5 Air 2026 QA Diagnostic Protocol - Combined Parallel Execution
# Total runtime: ~12–15 minutes (wall-clock)

mkdir -p ~/M5_QA_Reports
cd ~/M5_QA_Reports

echo "=== M5 Air 2026 QA Diagnostic Starting ==="
echo "Phase 1: Background data collection..."

# PHASE 1: All three commands in background
system_profiler SPPowerDataType > battery_report.txt 2>&1 &
system_profiler SPHardwareDataType > hardware_report.txt 2>&1 &
system_profiler SPSecureElementDataType > security_report.txt 2>&1 &

# Wait for Phase 1 to complete
wait

echo "✓ Phase 1 Complete (Battery, Hardware, Security data collected)"

# Review battery data while Phase 2 runs
echo ""
echo "=== BATTERY HEALTH CHECK ==="
grep -E "Cycle Count|Full Charge Capacity|Condition|Model Information" battery_report.txt | head -10

# PHASE 2A: Geekbench 6 (primary benchmark)
echo ""
echo "Phase 2A: Launching Geekbench 6 (CPU+GPU stress test)..."
echo "   → Also launching Blackmagic Disk Speed Test (in GUI)"
echo "   → Monitoring thermals in background..."

# Start Geekbench in background
geekbench-6 --upload > geekbench_results.txt 2>&1 &
GEEKBENCH_PID=$!

# Start Blackmagic Disk Speed Test (requires manual start in GUI)
open "/Applications/Blackmagic Disk Speed Test.app"

echo "   → Geekbench running (PID: $GEEKBENCH_PID)"
echo "   → Please manually start Blackmagic Disk Speed Test from the GUI"
echo "   → Waiting for Geekbench to complete (~7 minutes)..."

# Wait for Geekbench
wait $GEEKBENCH_PID
echo "✓ Phase 2A Complete"

# PHASE 2B: Cinebench R24 + dd storage test
echo ""
echo "Phase 2B: Launching Cinebench R24 (10-minute CPU rendering test)..."
open /Applications/Cinebench.app

# Start dd test in background (overlaps with Cinebench)
echo "   → Starting dd storage performance test (will overlap)..."
(
  echo "Sequential Write Test:" >> storage_report.txt
  time dd if=/dev/zero of=/tmp/test_write.bin bs=1m count=1000 2>&1 | tail -1 >> storage_report.txt
  
  echo "" >> storage_report.txt
  echo "Sequential Read Test:" >> storage_report.txt
  time dd if=/tmp/test_write.bin of=/dev/null bs=1m 2>&1 | tail -1 >> storage_report.txt
  
  rm /tmp/test_write.bin
  echo "✓ Storage test complete" >> storage_report.txt
) &

echo "   → Cinebench running (requires manual 'Full CPU Test' click)"
echo "   → Storage test running in background"
echo "   → Waiting for Cinebench to complete (~10 minutes)..."

# Wait for background tasks
wait

echo "✓ Phase 2B Complete"

# PHASE 3: Verification & reporting
echo ""
echo "=== PHASE 3: DIAGNOSTIC SUMMARY ==="
echo ""

echo "BATTERY HEALTH:"
grep -E "Cycle Count:|Full Charge Capacity|Condition:" battery_report.txt | head -4

echo ""
echo "HARDWARE CONFIGURATION:"
grep -E "Model Identifier:|Processor|Memory:|Storage:" hardware_report.txt | head -6

echo ""
echo "STORAGE PERFORMANCE:"
cat storage_report.txt

echo ""
echo "GEEKBENCH 6 RESULTS:"
grep -E "Multi-Core|Single-Core|GPU" geekbench_results.txt | head -6

echo ""
echo "=== DIAGNOSTIC REPORTS SAVED TO: ~/M5_QA_Reports ==="
ls -lh ~/ M5_QA_Reports/

echo ""
echo "MANUAL VERIFICATION CHECKLIST:"
echo "  [ ] Cycle Count = 0–3"
echo "  [ ] Full Charge Capacity ≥ 52,300 mAh"
echo "  [ ] Battery Condition = 'Normal'"
echo "  [ ] Geekbench Multi-Core ≥ 12,200"
echo "  [ ] Cinebench R24 Multi-Core ≥ 1,400"
echo "  [ ] Disk Write Speed ≥ 3,800 MB/s"
echo "  [ ] Disk Read Speed ≥ 5,000 MB/s"
echo "  [ ] Display: No dead pixels, even backlight"
echo "  [ ] Keyboard: Uniform key response"
echo "  [ ] Hinge: Smooth, no wobble"
echo "  [ ] Chassis: No dents, no damage"
echo ""
echo "=== QA DIAGNOSTIC COMPLETE ==="








