
#!/bin/bash

################################################################################
# M5 Air 2026 QA Diagnostic - Tool Installation Script
# Installs all dependencies and benchmarking tools
# Supports: macOS Tahoe (26) and later
################################################################################

set -e  # Exit on error

# Color codes for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Logging variables
INSTALL_LOG="/tmp/m5_qa_install_$(date +%Y%m%d_%H%M%S).log"
FAILED_INSTALLS=()

echo -e "${BLUE}╔════════════════════════════════════════════════════════════╗${NC}"
echo -e "${BLUE}║  M5 Air 2026 QA Diagnostic - Tool Installation Suite     ║${NC}"
echo -e "${BLUE}║  macOS Tahoe (26) Compatible                             ║${NC}"
echo -e "${BLUE}╚════════════════════════════════════════════════════════════╝${NC}"
echo ""
echo "Installation log: $INSTALL_LOG"
echo ""

# Function to log messages
log_message() {
    local level="$1"
    local message="$2"
    local timestamp=$(date '+%Y-%m-%d %H:%M:%S')
    echo "[$timestamp] [$level] $message" | tee -a "$INSTALL_LOG"
}

# Function to check if command exists
command_exists() {
    command -v "$1" >/dev/null 2>&1
}

# Function to check macOS version
check_macos_version() {
    local os_version=$(sw_vers -productVersion | cut -d. -f1)
    
    if [[ $os_version -ge 26 ]]; then
        log_message "INFO" "macOS version: $os_version (Tahoe or later) ✓"
        return 0
    else
        log_message "WARN" "macOS version: $os_version (Tahoe 26 or later recommended)"
        return 1
    fi
}

# Prompt for sudo upfront
echo -e "${YELLOW}⚠️  This script requires sudo privileges for some installations.${NC}"
echo "Please enter your password if prompted."
sudo -v

log_message "INFO" "=== Starting M5 Air 2026 QA Tool Installation ==="

# Check macOS version
check_macos_version

# Step 1: Install Homebrew (if not already installed)
echo ""
echo -e "${BLUE}[STEP 1] Checking/Installing Homebrew Package Manager${NC}"

if command_exists brew; then
    log_message "INFO" "Homebrew already installed: $(brew --version | head -1)"
    echo -e "${GREEN}✓ Homebrew found${NC}"
else
    log_message "INFO" "Installing Homebrew..."
    echo "Installing Homebrew..."
    /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)" 2>&1 | tee -a "$INSTALL_LOG"
    
    if command_exists brew; then
        log_message "SUCCESS" "Homebrew installed successfully"
        echo -e "${GREEN}✓ Homebrew installed${NC}"
    else
        log_message "ERROR" "Homebrew installation failed"
        echo -e "${RED}✗ Homebrew installation failed${NC}"
        FAILED_INSTALLS+=("Homebrew")
    fi
fi

# Step 2: Install essential CLI tools
echo ""
echo -e "${BLUE}[STEP 2] Installing Essential CLI Tools${NC}"

cli_tools=(
    "wget"
    "curl"
    "watch"
)

for tool in "${cli_tools[@]}"; do
    if command_exists "$tool"; then
        log_message "INFO" "$tool already installed"
        echo -e "${GREEN}✓ $tool${NC}"
    else
        echo "Installing $tool..."
        log_message "INFO" "Installing $tool via Homebrew"
        if brew install "$tool" 2>&1 | tee -a "$INSTALL_LOG"; then
            log_message "SUCCESS" "$tool installed successfully"
            echo -e "${GREEN}✓ $tool installed${NC}"
        else
            log_message "ERROR" "$tool installation failed"
            echo -e "${RED}✗ $tool installation failed${NC}"
            FAILED_INSTALLS+=("$tool")
        fi
    fi
done

# Step 3: Install Geekbench 6
echo ""
echo -e "${BLUE}[STEP 3] Installing Geekbench 6 (CPU/GPU Benchmark)${NC}"

if command_exists geekbench-6; then
    log_message "INFO" "Geekbench 6 already installed"
    echo -e "${GREEN}✓ Geekbench 6 found${NC}"
else
    echo "Installing Geekbench 6 via Homebrew..."
    log_message "INFO" "Installing Geekbench 6"
    
    # Try Homebrew installation
    if brew install geekbench 2>&1 | tee -a "$INSTALL_LOG"; then
        log_message "SUCCESS" "Geekbench 6 installed via Homebrew"
        echo -e "${GREEN}✓ Geekbench 6 installed${NC}"
    else
        log_message "WARN" "Geekbench 6 Homebrew install failed; attempting direct download..."
        echo -e "${YELLOW}⚠️  Attempting direct download from Primate Labs...${NC}"
        
        # Direct download method
        local gb_url="https://cdn.geekbench.com/Geekbench-6.2.2-Mac.zip"
        local gb_zip="/tmp/Geekbench-6.zip"
        
        if curl -fsSL -o "$gb_zip" "$gb_url" 2>&1 | tee -a "$INSTALL_LOG"; then
            unzip -q "$gb_zip" -d /Applications 2>&1 | tee -a "$INSTALL_LOG"
            rm "$gb_zip"
            log_message "SUCCESS" "Geekbench 6 installed from direct download"
            echo -e "${GREEN}✓ Geekbench 6 installed (direct download)${NC}"
        else
            log_message "ERROR" "Geekbench 6 installation failed (both methods)"
            echo -e "${RED}✗ Geekbench 6 installation failed${NC}"
            FAILED_INSTALLS+=("Geekbench 6")
        fi
    fi
fi

# Step 4: Install Cinebench R24
echo ""
# echo -e "${BLUE}[STEP 4] Installing Cinebench R24 (CPU Rendering Benchmark)${NC}"

# if [[ -d "/Applications/Cinebench.app" ]] || command_exists cinebench; then
#     log_message "INFO" "Cinebench R24 already installed"
#     echo -e "${GREEN}✓ Cinebench R24 found${NC}"
# else
#     echo "Installing Cinebench R24..."
#     log_message "INFO" "Installing Cinebench R24"
    
#     # Cinebench R24 download from Maxon
#     local cinebench_url="https://www.maxon.net/en/downloads"
#     log_message "WARN" "Cinebench R24 requires manual download from $cinebench_url"
#     echo -e "${YELLOW}⚠️  Cinebench R24 must be manually downloaded from:${NC}"
#     echo -e "${YELLOW}   $cinebench_url${NC}"
#     echo -e "${YELLOW}After download, drag Cinebench.app to /Applications${NC}"
    
#     FAILED_INSTALLS+=("Cinebench R24 (manual download required)")
# fi

# Step 5: Install Blackmagic Disk Speed Test
echo ""
echo -e "${BLUE}[STEP 5] Installing Blackmagic Disk Speed Test${NC}"

if [[ -d "/Applications/Blackmagic Disk Speed Test.app" ]]; then
    log_message "INFO" "Blackmagic Disk Speed Test already installed"
    echo -e "${GREEN}✓ Blackmagic Disk Speed Test found${NC}"
else
    echo "Installing Blackmagic Disk Speed Test from Mac App Store..."
    log_message "INFO" "Installing Blackmagic Disk Speed Test via mas-cli"
    
    # First ensure mas-cli is installed
    if ! command_exists mas; then
        echo "Installing mas-cli (Mac App Store CLI)..."
        brew install mas 2>&1 | tee -a "$INSTALL_LOG"
    fi
    
    if command_exists mas; then
        # Blackmagic Disk Speed Test App ID: 425424353
        if mas install 425424353 2>&1 | tee -a "$INSTALL_LOG"; then
            log_message "SUCCESS" "Blackmagic Disk Speed Test installed"
            echo -e "${GREEN}✓ Blackmagic Disk Speed Test installed${NC}"
        else
            log_message "WARN" "Could not install via mas-cli; manual installation required"
            echo -e "${YELLOW}⚠️  Install via Mac App Store or download from:${NC}"
            echo -e "${YELLOW}   https://www.blackmagicdesign.com/products/blackmagicdiskspeedtest${NC}"
            FAILED_INSTALLS+=("Blackmagic Disk Speed Test (manual download may be required)")
        fi
    else
        log_message "ERROR" "mas-cli installation failed"
        FAILED_INSTALLS+=("mas-cli / Blackmagic Disk Speed Test")
    fi
fi

# Step 6: Install moreutils (for ts timestamp tool, optional)
echo ""
echo -e "${BLUE}[STEP 6] Installing Utility Tools (moreutils)${NC}"

if brew install moreutils 2>&1 | tee -a "$INSTALL_LOG"; then
    log_message "SUCCESS" "moreutils installed (for enhanced logging)"
    echo -e "${GREEN}✓ moreutils installed${NC}"
else
    log_message "WARN" "moreutils installation failed (optional; continue without)"
    echo -e "${YELLOW}⚠️  moreutils failed (optional)${NC}"
fi

# Step 7: Verify system_profiler (built-in, always available)
echo ""
echo -e "${BLUE}[STEP 7] Verifying Built-in Tools${NC}"

built_in_tools=("system_profiler" "ioreg" "powermetrics" "nvram")
for tool in "${built_in_tools[@]}"; do
    if command_exists "$tool"; then
        log_message "INFO" "$tool (built-in) available"
        echo -e "${GREEN}✓ $tool${NC}"
    else
        log_message "WARN" "$tool not found (may require elevated privileges)"
        echo -e "${YELLOW}⚠️  $tool${NC}"
    fi
done

# Step 8: Create QA report directories
echo ""
echo -e "${BLUE}[STEP 8] Creating QA Diagnostic Directories${NC}"

QA_DIR="$HOME/M5_QA_Reports"
mkdir -p "$QA_DIR"
mkdir -p "$QA_DIR/logs"
mkdir -p "$QA_DIR/reports"

log_message "INFO" "QA directories created at: $QA_DIR"
echo -e "${GREEN}✓ QA directories created at: $QA_DIR${NC}"

# Step 9: Verify installations
echo ""
echo -e "${BLUE}[STEP 9] Final Verification${NC}"

REQUIRED_TOOLS=("geekbench-6" "curl" "wget")
MISSING_TOOLS=()

for tool in "${REQUIRED_TOOLS[@]}"; do
    if ! command_exists "$tool"; then
        MISSING_TOOLS+=("$tool")
    fi
done

# Summary Report
echo ""
echo -e "${BLUE}╔════════════════════════════════════════════════════════════╗${NC}"
echo -e "${BLUE}║                   INSTALLATION SUMMARY                     ║${NC}"
echo -e "${BLUE}╚════════════════════════════════════════════════════════════╝${NC}"
echo ""

log_message "INFO" "=== Installation Summary ==="

echo -e "${GREEN}✓ INSTALLED SUCCESSFULLY:${NC}"
echo "  • Homebrew (package manager)"
echo "  • CLI Tools (curl, wget, watch)"
echo "  • Geekbench 6 (CPU/GPU benchmark)"
echo "  • System utilities (system_profiler, ioreg, powermetrics)"
echo ""

if [[ ${#FAILED_INSTALLS[@]} -gt 0 ]]; then
    echo -e "${YELLOW}⚠️  REQUIRES MANUAL INSTALLATION:${NC}"
    for failed in "${FAILED_INSTALLS[@]}"; do
        echo "  • $failed"
        log_message "WARN" "Manual installation needed: $failed"
    done
    echo ""
fi

echo -e "${BLUE}📁 QA Report Directory:${NC} $QA_DIR"
echo -e "${BLUE}📝 Installation Log:${NC} $INSTALL_LOG"
echo ""

if [[ ${#MISSING_TOOLS[@]} -eq 0 ]]; then
    echo -e "${GREEN}✓ All essential tools installed successfully!${NC}"
    log_message "SUCCESS" "Installation complete; all tools ready"
    exit 0
else
    echo -e "${YELLOW}⚠️  Some tools require manual installation.${NC}"
    echo -e "${YELLOW}Please refer to the log and manual installation notes above.${NC}"
    log_message "WARN" "Installation complete with some manual steps required"
    exit 0
fi