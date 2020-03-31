// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vtop_H_
#define _Vtop_H_

#include "verilated.h"

class Vtop__Syms;

//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(rxd,0,0);
    VL_OUT8(txd,0,0);
    VL_IN8(awvalid,0,0);
    VL_OUT8(awready,0,0);
    VL_IN8(wstrb,3,0);
    VL_IN8(wvalid,0,0);
    VL_OUT8(wready,0,0);
    VL_OUT8(bresp,1,0);
    VL_OUT8(bvalid,0,0);
    VL_IN8(bready,0,0);
    VL_IN8(arvalid,0,0);
    VL_OUT8(arready,0,0);
    VL_OUT8(rresp,1,0);
    VL_OUT8(rvalid,0,0);
    VL_IN8(rready,0,0);
    VL_IN(awaddr,31,0);
    VL_IN(wdata,31,0);
    VL_IN(araddr,31,0);
    VL_OUT(rdata,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(top__DOT__uart_rst,0,0);
    VL_SIG8(top__DOT__uart_wdata,7,0);
    VL_SIG8(top__DOT__uart_wvalid,0,0);
    VL_SIG8(top__DOT__uart_rvalid,0,0);
    VL_SIG8(top__DOT__uart_rready,0,0);
    VL_SIG8(top__DOT__ctl_rxe,0,0);
    VL_SIG8(top__DOT__stat_reg,7,0);
    VL_SIG8(top__DOT__ctrl_reg,4,0);
    VL_SIG8(top__DOT__awready_r,0,0);
    VL_SIG8(top__DOT__wready_r,0,0);
    VL_SIG8(top__DOT__bvalid_r,0,0);
    VL_SIG8(top__DOT__arready_r,0,0);
    VL_SIG8(top__DOT__rvalid_r,0,0);
    VL_SIG8(top__DOT__write_addr,1,0);
    VL_SIG8(top__DOT__read_addr,1,0);
    VL_SIG8(top__DOT__uart_rdata_r,7,0);
    VL_SIG8(top__DOT__uart_send,0,0);
    VL_SIG8(top__DOT__uart_read,0,0);
    VL_SIG8(top__DOT__axi_aw__DOT__enable,0,0);
    VL_SIG8(top__DOT__axi_w__DOT__enable,0,0);
    VL_SIG8(top__DOT__axi_b__DOT__enable,0,0);
    VL_SIG8(top__DOT__axi_ar__DOT__enable,0,0);
    VL_SIG8(top__DOT__axi_r__DOT__enable,0,0);
    VL_SIG8(top__DOT__uart_w__DOT__enable,0,0);
    VL_SIG8(top__DOT__uart_r__DOT__enable,0,0);
    VL_SIG8(top__DOT__uart_inst__DOT__uart_tx_inst__DOT__s_axis_tready_reg,0,0);
    VL_SIG8(top__DOT__uart_inst__DOT__uart_tx_inst__DOT__txd_reg,0,0);
    VL_SIG8(top__DOT__uart_inst__DOT__uart_tx_inst__DOT__busy_reg,0,0);
    VL_SIG8(top__DOT__uart_inst__DOT__uart_tx_inst__DOT__bit_cnt,3,0);
    VL_SIG8(top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tdata_reg,7,0);
    VL_SIG8(top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tvalid_reg,0,0);
    VL_SIG8(top__DOT__uart_inst__DOT__uart_rx_inst__DOT__rxd_reg,0,0);
    VL_SIG8(top__DOT__uart_inst__DOT__uart_rx_inst__DOT__overrun_error_reg,0,0);
    VL_SIG8(top__DOT__uart_inst__DOT__uart_rx_inst__DOT__frame_error_reg,0,0);
    VL_SIG8(top__DOT__uart_inst__DOT__uart_rx_inst__DOT__data_reg,7,0);
    VL_SIG8(top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt,3,0);
    VL_SIG16(top__DOT__uart_inst__DOT__uart_tx_inst__DOT__data_reg,8,0);
    VL_SIG(top__DOT__rdata_r,31,0);
    VL_SIG(top__DOT__uart_inst__DOT__uart_tx_inst__DOT__prescale_reg,31,0);
    VL_SIG(top__DOT__uart_inst__DOT__uart_rx_inst__DOT__prescale_reg,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vtop& operator= (const Vtop&);  ///< Copying not allowed
    Vtop(const Vtop&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vtop(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp);
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
