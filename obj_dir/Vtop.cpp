// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"              // For This
#include "Vtop__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vtop::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at top.v:81
    vlTOPp->bresp = 0U;
    // INITIAL at top.v:82
    vlTOPp->rresp = 0U;
    // INITIAL at uart_tx.v:65
    vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__txd_reg = 1U;
    // INITIAL at uart_rx.v:72
    vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__overrun_error_reg = 0U;
    // INITIAL at uart_rx.v:73
    vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__frame_error_reg = 0U;
    // INITIAL at uart_tx.v:67
    vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__busy_reg = 0U;
    // INITIAL at uart_tx.v:63
    vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__s_axis_tready_reg = 0U;
    // INITIAL at uart_tx.v:69
    vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__data_reg = 0U;
    // INITIAL at uart_tx.v:70
    vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__prescale_reg = 0U;
    // INITIAL at uart_tx.v:71
    vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__bit_cnt = 0U;
    // INITIAL at uart_rx.v:66
    vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tdata_reg = 0U;
    // INITIAL at uart_rx.v:69
    vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__rxd_reg = 1U;
    // INITIAL at uart_rx.v:75
    vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__data_reg = 0U;
    // INITIAL at uart_rx.v:76
    vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__prescale_reg = 0U;
    // INITIAL at uart_rx.v:77
    vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt = 0U;
    // INITIAL at uart_rx.v:67
    vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tvalid_reg = 0U;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__top__DOT__awready_r,0,0);
    VL_SIG8(__Vdly__top__DOT__axi_aw__DOT__enable,0,0);
    VL_SIG8(__Vdly__top__DOT__wready_r,0,0);
    VL_SIG8(__Vdly__top__DOT__axi_w__DOT__enable,0,0);
    VL_SIG8(__Vdly__top__DOT__bvalid_r,0,0);
    VL_SIG8(__Vdly__top__DOT__axi_b__DOT__enable,0,0);
    VL_SIG8(__Vdly__top__DOT__arready_r,0,0);
    VL_SIG8(__Vdly__top__DOT__axi_ar__DOT__enable,0,0);
    VL_SIG8(__Vdly__top__DOT__rvalid_r,0,0);
    VL_SIG8(__Vdly__top__DOT__axi_r__DOT__enable,0,0);
    VL_SIG8(__Vdly__top__DOT__uart_wvalid,0,0);
    VL_SIG8(__Vdly__top__DOT__uart_w__DOT__enable,0,0);
    VL_SIG8(__Vdly__top__DOT__uart_rready,0,0);
    VL_SIG8(__Vdly__top__DOT__uart_rdata_r,7,0);
    VL_SIG8(__Vdly__top__DOT__uart_r__DOT__enable,0,0);
    VL_SIG8(__Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__s_axis_tready_reg,0,0);
    VL_SIG8(__Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__bit_cnt,3,0);
    VL_SIG8(__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tvalid_reg,0,0);
    VL_SIG8(__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__rxd_reg,0,0);
    VL_SIG8(__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt,3,0);
    VL_SIG8(__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__data_reg,7,0);
    VL_SIG16(__Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__data_reg,8,0);
    VL_SIG(__Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__prescale_reg,31,0);
    VL_SIG(__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__prescale_reg,31,0);
    // Body
    __Vdly__top__DOT__axi_b__DOT__enable = vlTOPp->top__DOT__axi_b__DOT__enable;
    __Vdly__top__DOT__bvalid_r = vlTOPp->top__DOT__bvalid_r;
    __Vdly__top__DOT__axi_ar__DOT__enable = vlTOPp->top__DOT__axi_ar__DOT__enable;
    __Vdly__top__DOT__axi_aw__DOT__enable = vlTOPp->top__DOT__axi_aw__DOT__enable;
    __Vdly__top__DOT__arready_r = vlTOPp->top__DOT__arready_r;
    __Vdly__top__DOT__awready_r = vlTOPp->top__DOT__awready_r;
    __Vdly__top__DOT__axi_w__DOT__enable = vlTOPp->top__DOT__axi_w__DOT__enable;
    __Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__rxd_reg 
	= vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__rxd_reg;
    __Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__prescale_reg 
	= vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__prescale_reg;
    __Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt 
	= vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt;
    __Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__data_reg 
	= vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__data_reg;
    __Vdly__top__DOT__wready_r = vlTOPp->top__DOT__wready_r;
    __Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tvalid_reg 
	= vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tvalid_reg;
    __Vdly__top__DOT__uart_wvalid = vlTOPp->top__DOT__uart_wvalid;
    __Vdly__top__DOT__uart_w__DOT__enable = vlTOPp->top__DOT__uart_w__DOT__enable;
    __Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__s_axis_tready_reg 
	= vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__s_axis_tready_reg;
    __Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__prescale_reg 
	= vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__prescale_reg;
    __Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__bit_cnt 
	= vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__bit_cnt;
    __Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__data_reg 
	= vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__data_reg;
    __Vdly__top__DOT__axi_r__DOT__enable = vlTOPp->top__DOT__axi_r__DOT__enable;
    __Vdly__top__DOT__rvalid_r = vlTOPp->top__DOT__rvalid_r;
    __Vdly__top__DOT__uart_rready = vlTOPp->top__DOT__uart_rready;
    __Vdly__top__DOT__uart_rdata_r = vlTOPp->top__DOT__uart_rdata_r;
    __Vdly__top__DOT__uart_r__DOT__enable = vlTOPp->top__DOT__uart_r__DOT__enable;
    // ALWAYS at top.v:166
    if (vlTOPp->rst) {
	__Vdly__top__DOT__bvalid_r = 0U;
	__Vdly__top__DOT__axi_b__DOT__enable = 1U;
    } else {
	if (((IData)(vlTOPp->top__DOT__axi_b__DOT__enable) 
	     & (IData)(vlTOPp->bready))) {
	    __Vdly__top__DOT__axi_b__DOT__enable = 0U;
	    __Vdly__top__DOT__bvalid_r = 1U;
	}
	if (((IData)(vlTOPp->top__DOT__bvalid_r) & (IData)(vlTOPp->bready))) {
	    __Vdly__top__DOT__axi_b__DOT__enable = 1U;
	    __Vdly__top__DOT__bvalid_r = 0U;
	}
    }
    // ALWAYS at top.v:243
    if (vlTOPp->top__DOT__uart_rst) {
	__Vdly__top__DOT__uart_wvalid = 0U;
	__Vdly__top__DOT__uart_w__DOT__enable = 1U;
    } else {
	if (((IData)(vlTOPp->top__DOT__uart_w__DOT__enable) 
	     & (IData)(vlTOPp->top__DOT__uart_send))) {
	    __Vdly__top__DOT__uart_wvalid = 1U;
	    __Vdly__top__DOT__uart_w__DOT__enable = 0U;
	}
	if (((IData)(vlTOPp->top__DOT__uart_wvalid) 
	     & (IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__s_axis_tready_reg))) {
	    __Vdly__top__DOT__uart_w__DOT__enable = 1U;
	    __Vdly__top__DOT__uart_wvalid = 0U;
	}
    }
    // ALWAYS at uart_tx.v:78
    if (vlTOPp->top__DOT__uart_rst) {
	__Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__s_axis_tready_reg = 0U;
	vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__txd_reg = 1U;
	__Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__prescale_reg = 0U;
	__Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__bit_cnt = 0U;
	vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__busy_reg = 0U;
    } else {
	if ((0U < vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__prescale_reg)) {
	    __Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__prescale_reg 
		= (vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__prescale_reg 
		   - (IData)(1U));
	    __Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__s_axis_tready_reg = 0U;
	} else {
	    if ((0U == (IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__bit_cnt))) {
		__Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__s_axis_tready_reg = 1U;
		vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__busy_reg = 0U;
		if (vlTOPp->top__DOT__uart_wvalid) {
		    __Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__s_axis_tready_reg 
			= (1U & (~ (IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__s_axis_tready_reg)));
		    __Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__prescale_reg = 0x35fU;
		    __Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__bit_cnt = 9U;
		    __Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__data_reg 
			= (0x100U | (IData)(vlTOPp->top__DOT__uart_wdata));
		    vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__txd_reg = 0U;
		    vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__busy_reg = 1U;
		}
	    } else {
		if ((1U < (IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__bit_cnt))) {
		    __Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__bit_cnt 
			= (0xfU & ((IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__bit_cnt) 
				   - (IData)(1U)));
		    __Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__data_reg 
			= (0x1ffU & ((IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__data_reg) 
				     >> 1U));
		    __Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__prescale_reg = 0x35fU;
		    vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__txd_reg 
			= (1U & (IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__data_reg));
		} else {
		    if ((1U == (IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__bit_cnt))) {
			__Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__bit_cnt 
			    = (0xfU & ((IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__bit_cnt) 
				       - (IData)(1U)));
			__Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__prescale_reg = 0x360U;
			vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__txd_reg = 1U;
		    }
		}
	    }
	}
    }
    // ALWAYS at top.v:260
    if (vlTOPp->top__DOT__uart_rst) {
	__Vdly__top__DOT__uart_rready = 0U;
	__Vdly__top__DOT__uart_rdata_r = 0U;
	vlTOPp->top__DOT__ctl_rxe = 1U;
	__Vdly__top__DOT__uart_r__DOT__enable = 1U;
    } else {
	if (((IData)(vlTOPp->top__DOT__uart_r__DOT__enable) 
	     & (IData)(vlTOPp->top__DOT__uart_read))) {
	    vlTOPp->top__DOT__ctl_rxe = 1U;
	    __Vdly__top__DOT__uart_rready = 1U;
	    __Vdly__top__DOT__uart_r__DOT__enable = 0U;
	}
	if (((IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tvalid_reg) 
	     & (IData)(vlTOPp->top__DOT__uart_rready))) {
	    __Vdly__top__DOT__uart_r__DOT__enable = 1U;
	    __Vdly__top__DOT__uart_rready = 0U;
	    __Vdly__top__DOT__uart_rdata_r = vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tdata_reg;
	    vlTOPp->top__DOT__ctl_rxe = 0U;
	}
    }
    vlTOPp->top__DOT__axi_b__DOT__enable = __Vdly__top__DOT__axi_b__DOT__enable;
    vlTOPp->top__DOT__uart_w__DOT__enable = __Vdly__top__DOT__uart_w__DOT__enable;
    vlTOPp->top__DOT__uart_wvalid = __Vdly__top__DOT__uart_wvalid;
    vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__s_axis_tready_reg 
	= __Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__s_axis_tready_reg;
    vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__prescale_reg 
	= __Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__prescale_reg;
    vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__bit_cnt 
	= __Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__bit_cnt;
    vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__data_reg 
	= __Vdly__top__DOT__uart_inst__DOT__uart_tx_inst__DOT__data_reg;
    vlTOPp->top__DOT__uart_r__DOT__enable = __Vdly__top__DOT__uart_r__DOT__enable;
    vlTOPp->txd = vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__txd_reg;
    // ALWAYS at top.v:125
    if (vlTOPp->rst) {
	__Vdly__top__DOT__wready_r = 0U;
	__Vdly__top__DOT__axi_w__DOT__enable = 1U;
	vlTOPp->top__DOT__uart_send = 0U;
	vlTOPp->top__DOT__uart_wdata = 0U;
	vlTOPp->top__DOT__ctrl_reg = 0U;
    } else {
	vlTOPp->top__DOT__uart_send = 0U;
	if (((IData)(vlTOPp->top__DOT__axi_w__DOT__enable) 
	     & (IData)(vlTOPp->wvalid))) {
	    __Vdly__top__DOT__axi_w__DOT__enable = 0U;
	    __Vdly__top__DOT__wready_r = 1U;
	}
	if (((IData)(vlTOPp->top__DOT__wready_r) & (IData)(vlTOPp->wvalid))) {
	    __Vdly__top__DOT__wready_r = 0U;
	    if ((0U != (IData)(vlTOPp->top__DOT__write_addr))) {
		if ((1U == (IData)(vlTOPp->top__DOT__write_addr))) {
		    vlTOPp->top__DOT__uart_send = 1U;
		    vlTOPp->top__DOT__uart_wdata = 
			(0xffU & vlTOPp->wdata);
		} else {
		    if ((2U == (IData)(vlTOPp->top__DOT__write_addr))) {
			vlTOPp->top__DOT__ctrl_reg 
			    = (0x1fU & vlTOPp->wdata);
		    }
		}
	    }
	}
	if (((IData)(vlTOPp->top__DOT__bvalid_r) & (IData)(vlTOPp->bready))) {
	    __Vdly__top__DOT__axi_w__DOT__enable = 1U;
	}
    }
    // ALWAYS at uart_rx.v:86
    if (vlTOPp->top__DOT__uart_rst) {
	vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tdata_reg = 0U;
	__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tvalid_reg = 0U;
	__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__rxd_reg = 1U;
	__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__prescale_reg = 0U;
	__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt = 0U;
	vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__overrun_error_reg = 0U;
	vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__frame_error_reg = 0U;
    } else {
	vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__overrun_error_reg = 0U;
	vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__frame_error_reg = 0U;
	if (((IData)(vlTOPp->top__DOT__uart_rvalid) 
	     & (IData)(vlTOPp->top__DOT__uart_rready))) {
	    __Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tvalid_reg = 0U;
	}
	if ((0U < vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__prescale_reg)) {
	    __Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__prescale_reg 
		= (vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__prescale_reg 
		   - (IData)(1U));
	} else {
	    if ((0U < (IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt))) {
		if ((9U < (IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt))) {
		    if (vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__rxd_reg) {
			__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt = 0U;
			__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__prescale_reg = 0U;
		    } else {
			__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt 
			    = (0xfU & ((IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt) 
				       - (IData)(1U)));
			__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__prescale_reg = 0x35fU;
		    }
		} else {
		    if ((1U < (IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt))) {
			__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt 
			    = (0xfU & ((IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt) 
				       - (IData)(1U)));
			__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__data_reg 
			    = (((IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__rxd_reg) 
				<< 7U) | (0x7fU & ((IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__data_reg) 
						   >> 1U)));
			__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__prescale_reg = 0x35fU;
		    } else {
			if ((1U == (IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt))) {
			    __Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt 
				= (0xfU & ((IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt) 
					   - (IData)(1U)));
			    if (vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__rxd_reg) {
				vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tdata_reg 
				    = vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__data_reg;
				vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__overrun_error_reg 
				    = vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tvalid_reg;
				__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tvalid_reg = 1U;
			    } else {
				vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__frame_error_reg = 1U;
			    }
			}
		    }
		}
	    } else {
		if ((1U & (~ (IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__rxd_reg)))) {
		    __Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__data_reg = 0U;
		    __Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__prescale_reg = 0x1aeU;
		    __Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt = 0xaU;
		}
	    }
	}
	__Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__rxd_reg 
	    = vlTOPp->rxd;
    }
    // ALWAYS at top.v:207
    if (vlTOPp->rst) {
	__Vdly__top__DOT__rvalid_r = 0U;
	vlTOPp->top__DOT__rdata_r = 0U;
	vlTOPp->top__DOT__uart_read = 0U;
	__Vdly__top__DOT__axi_r__DOT__enable = 1U;
    } else {
	vlTOPp->top__DOT__uart_read = 0U;
	if (((IData)(vlTOPp->top__DOT__axi_r__DOT__enable) 
	     & (IData)(vlTOPp->rready))) {
	    __Vdly__top__DOT__axi_r__DOT__enable = 0U;
	    __Vdly__top__DOT__rvalid_r = 1U;
	    if ((0U == (IData)(vlTOPp->top__DOT__read_addr))) {
		vlTOPp->top__DOT__uart_read = 1U;
		vlTOPp->top__DOT__rdata_r = ((0xffffff00U 
					      & vlTOPp->top__DOT__rdata_r) 
					     | (IData)(vlTOPp->top__DOT__uart_rdata_r));
	    } else {
		if ((1U == (IData)(vlTOPp->top__DOT__read_addr))) {
		    vlTOPp->top__DOT__rdata_r = 0U;
		} else {
		    if ((2U == (IData)(vlTOPp->top__DOT__read_addr))) {
			vlTOPp->top__DOT__rdata_r = 0U;
		    } else {
			if ((3U == (IData)(vlTOPp->top__DOT__read_addr))) {
			    vlTOPp->top__DOT__rdata_r 
				= ((0xffffff00U & vlTOPp->top__DOT__rdata_r) 
				   | (IData)(vlTOPp->top__DOT__stat_reg));
			}
		    }
		}
	    }
	}
	if (((IData)(vlTOPp->top__DOT__rvalid_r) & (IData)(vlTOPp->rready))) {
	    __Vdly__top__DOT__rvalid_r = 0U;
	    __Vdly__top__DOT__axi_r__DOT__enable = 1U;
	}
    }
    vlTOPp->top__DOT__axi_w__DOT__enable = __Vdly__top__DOT__axi_w__DOT__enable;
    vlTOPp->top__DOT__wready_r = __Vdly__top__DOT__wready_r;
    vlTOPp->top__DOT__uart_rready = __Vdly__top__DOT__uart_rready;
    vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__rxd_reg 
	= __Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__rxd_reg;
    vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__prescale_reg 
	= __Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__prescale_reg;
    vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt 
	= __Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt;
    vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__data_reg 
	= __Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__data_reg;
    vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tvalid_reg 
	= __Vdly__top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tvalid_reg;
    vlTOPp->top__DOT__axi_r__DOT__enable = __Vdly__top__DOT__axi_r__DOT__enable;
    vlTOPp->top__DOT__uart_rdata_r = __Vdly__top__DOT__uart_rdata_r;
    vlTOPp->top__DOT__stat_reg = ((0xfeU & (IData)(vlTOPp->top__DOT__stat_reg)) 
				  | (1U & (~ (IData)(vlTOPp->top__DOT__ctl_rxe))));
    vlTOPp->top__DOT__stat_reg = ((0xfdU & (IData)(vlTOPp->top__DOT__stat_reg)) 
				  | (2U & ((~ (IData)(vlTOPp->top__DOT__ctl_rxe)) 
					   << 1U)));
    vlTOPp->top__DOT__stat_reg = ((0xfbU & (IData)(vlTOPp->top__DOT__stat_reg)) 
				  | (4U & ((~ (IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__busy_reg)) 
					   << 2U)));
    vlTOPp->top__DOT__stat_reg = ((0xf7U & (IData)(vlTOPp->top__DOT__stat_reg)) 
				  | ((IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__busy_reg) 
				     << 3U));
    vlTOPp->wready = vlTOPp->top__DOT__wready_r;
    vlTOPp->top__DOT__stat_reg = ((0xefU & (IData)(vlTOPp->top__DOT__stat_reg)) 
				  | (0x10U & (IData)(vlTOPp->top__DOT__ctrl_reg)));
    // ALWAYS at top.v:102
    if (vlTOPp->rst) {
	vlTOPp->top__DOT__write_addr = 0U;
	__Vdly__top__DOT__awready_r = 0U;
	__Vdly__top__DOT__axi_aw__DOT__enable = 1U;
    } else {
	if (((IData)(vlTOPp->top__DOT__axi_aw__DOT__enable) 
	     & (IData)(vlTOPp->awvalid))) {
	    __Vdly__top__DOT__axi_aw__DOT__enable = 0U;
	    __Vdly__top__DOT__awready_r = 1U;
	}
	if (((IData)(vlTOPp->top__DOT__awready_r) & (IData)(vlTOPp->awvalid))) {
	    __Vdly__top__DOT__awready_r = 0U;
	    vlTOPp->top__DOT__write_addr = (3U & (vlTOPp->awaddr 
						  >> 2U));
	}
	if (((IData)(vlTOPp->top__DOT__bvalid_r) & (IData)(vlTOPp->bready))) {
	    __Vdly__top__DOT__axi_aw__DOT__enable = 1U;
	}
    }
    vlTOPp->top__DOT__uart_rvalid = vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tvalid_reg;
    vlTOPp->top__DOT__stat_reg = ((0xdfU & (IData)(vlTOPp->top__DOT__stat_reg)) 
				  | ((IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__overrun_error_reg) 
				     << 5U));
    vlTOPp->top__DOT__stat_reg = ((0xbfU & (IData)(vlTOPp->top__DOT__stat_reg)) 
				  | ((IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__frame_error_reg) 
				     << 6U));
    vlTOPp->rdata = vlTOPp->top__DOT__rdata_r;
    // ALWAYS at top.v:184
    if (vlTOPp->rst) {
	vlTOPp->top__DOT__read_addr = 0U;
	__Vdly__top__DOT__arready_r = 0U;
	__Vdly__top__DOT__axi_ar__DOT__enable = 1U;
    } else {
	if (((IData)(vlTOPp->top__DOT__axi_ar__DOT__enable) 
	     & (IData)(vlTOPp->arvalid))) {
	    __Vdly__top__DOT__axi_ar__DOT__enable = 0U;
	    __Vdly__top__DOT__arready_r = 1U;
	}
	if (((IData)(vlTOPp->top__DOT__arready_r) & (IData)(vlTOPp->arvalid))) {
	    __Vdly__top__DOT__arready_r = 0U;
	    vlTOPp->top__DOT__read_addr = (3U & (vlTOPp->araddr 
						 >> 2U));
	}
	if (((IData)(vlTOPp->top__DOT__rvalid_r) & (IData)(vlTOPp->rready))) {
	    __Vdly__top__DOT__axi_ar__DOT__enable = 1U;
	}
    }
    vlTOPp->top__DOT__axi_aw__DOT__enable = __Vdly__top__DOT__axi_aw__DOT__enable;
    vlTOPp->top__DOT__awready_r = __Vdly__top__DOT__awready_r;
    vlTOPp->top__DOT__bvalid_r = __Vdly__top__DOT__bvalid_r;
    vlTOPp->top__DOT__axi_ar__DOT__enable = __Vdly__top__DOT__axi_ar__DOT__enable;
    vlTOPp->top__DOT__arready_r = __Vdly__top__DOT__arready_r;
    vlTOPp->top__DOT__rvalid_r = __Vdly__top__DOT__rvalid_r;
    vlTOPp->awready = vlTOPp->top__DOT__awready_r;
    vlTOPp->bvalid = vlTOPp->top__DOT__bvalid_r;
    vlTOPp->arready = vlTOPp->top__DOT__arready_r;
    vlTOPp->rvalid = vlTOPp->top__DOT__rvalid_r;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__stat_reg = (0x7fU & (IData)(vlTOPp->top__DOT__stat_reg));
    vlTOPp->top__DOT__stat_reg = ((0xfeU & (IData)(vlTOPp->top__DOT__stat_reg)) 
				  | (1U & (~ (IData)(vlTOPp->top__DOT__ctl_rxe))));
    vlTOPp->top__DOT__stat_reg = ((0xfdU & (IData)(vlTOPp->top__DOT__stat_reg)) 
				  | (2U & ((~ (IData)(vlTOPp->top__DOT__ctl_rxe)) 
					   << 1U)));
    vlTOPp->wready = vlTOPp->top__DOT__wready_r;
    vlTOPp->rdata = vlTOPp->top__DOT__rdata_r;
    vlTOPp->top__DOT__uart_rst = (1U & (((IData)(vlTOPp->rst) 
					 | ((IData)(vlTOPp->top__DOT__ctrl_reg) 
					    >> 1U)) 
					| (IData)(vlTOPp->top__DOT__ctrl_reg)));
    vlTOPp->top__DOT__stat_reg = ((0xefU & (IData)(vlTOPp->top__DOT__stat_reg)) 
				  | (0x10U & (IData)(vlTOPp->top__DOT__ctrl_reg)));
    vlTOPp->awready = vlTOPp->top__DOT__awready_r;
    vlTOPp->bvalid = vlTOPp->top__DOT__bvalid_r;
    vlTOPp->arready = vlTOPp->top__DOT__arready_r;
    vlTOPp->rvalid = vlTOPp->top__DOT__rvalid_r;
    vlTOPp->txd = vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__txd_reg;
    vlTOPp->top__DOT__stat_reg = ((0xdfU & (IData)(vlTOPp->top__DOT__stat_reg)) 
				  | ((IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__overrun_error_reg) 
				     << 5U));
    vlTOPp->top__DOT__stat_reg = ((0xbfU & (IData)(vlTOPp->top__DOT__stat_reg)) 
				  | ((IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__frame_error_reg) 
				     << 6U));
    vlTOPp->top__DOT__stat_reg = ((0xfbU & (IData)(vlTOPp->top__DOT__stat_reg)) 
				  | (4U & ((~ (IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__busy_reg)) 
					   << 2U)));
    vlTOPp->top__DOT__stat_reg = ((0xf7U & (IData)(vlTOPp->top__DOT__stat_reg)) 
				  | ((IData)(vlTOPp->top__DOT__uart_inst__DOT__uart_tx_inst__DOT__busy_reg) 
				     << 3U));
    vlTOPp->top__DOT__uart_rvalid = vlTOPp->top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tvalid_reg;
}

VL_INLINE_OPT void Vtop::_combo__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__uart_rst = (1U & (((IData)(vlTOPp->rst) 
					 | ((IData)(vlTOPp->top__DOT__ctrl_reg) 
					    >> 1U)) 
					| (IData)(vlTOPp->top__DOT__ctrl_reg)));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst & 0xfeU))) {
	Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((rxd & 0xfeU))) {
	Verilated::overWidthError("rxd");}
    if (VL_UNLIKELY((awvalid & 0xfeU))) {
	Verilated::overWidthError("awvalid");}
    if (VL_UNLIKELY((wstrb & 0xf0U))) {
	Verilated::overWidthError("wstrb");}
    if (VL_UNLIKELY((wvalid & 0xfeU))) {
	Verilated::overWidthError("wvalid");}
    if (VL_UNLIKELY((bready & 0xfeU))) {
	Verilated::overWidthError("bready");}
    if (VL_UNLIKELY((arvalid & 0xfeU))) {
	Verilated::overWidthError("arvalid");}
    if (VL_UNLIKELY((rready & 0xfeU))) {
	Verilated::overWidthError("rready");}
}
#endif // VL_DEBUG

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    rxd = VL_RAND_RESET_I(1);
    txd = VL_RAND_RESET_I(1);
    awaddr = VL_RAND_RESET_I(32);
    awvalid = VL_RAND_RESET_I(1);
    awready = VL_RAND_RESET_I(1);
    wdata = VL_RAND_RESET_I(32);
    wstrb = VL_RAND_RESET_I(4);
    wvalid = VL_RAND_RESET_I(1);
    wready = VL_RAND_RESET_I(1);
    bresp = VL_RAND_RESET_I(2);
    bvalid = VL_RAND_RESET_I(1);
    bready = VL_RAND_RESET_I(1);
    araddr = VL_RAND_RESET_I(32);
    arvalid = VL_RAND_RESET_I(1);
    arready = VL_RAND_RESET_I(1);
    rdata = VL_RAND_RESET_I(32);
    rresp = VL_RAND_RESET_I(2);
    rvalid = VL_RAND_RESET_I(1);
    rready = VL_RAND_RESET_I(1);
    top__DOT__uart_rst = VL_RAND_RESET_I(1);
    top__DOT__uart_wdata = VL_RAND_RESET_I(8);
    top__DOT__uart_wvalid = VL_RAND_RESET_I(1);
    top__DOT__uart_rvalid = VL_RAND_RESET_I(1);
    top__DOT__uart_rready = VL_RAND_RESET_I(1);
    top__DOT__ctl_rxe = VL_RAND_RESET_I(1);
    top__DOT__stat_reg = VL_RAND_RESET_I(8);
    top__DOT__ctrl_reg = VL_RAND_RESET_I(5);
    top__DOT__awready_r = VL_RAND_RESET_I(1);
    top__DOT__wready_r = VL_RAND_RESET_I(1);
    top__DOT__bvalid_r = VL_RAND_RESET_I(1);
    top__DOT__arready_r = VL_RAND_RESET_I(1);
    top__DOT__rvalid_r = VL_RAND_RESET_I(1);
    top__DOT__rdata_r = VL_RAND_RESET_I(32);
    top__DOT__write_addr = VL_RAND_RESET_I(2);
    top__DOT__read_addr = VL_RAND_RESET_I(2);
    top__DOT__uart_rdata_r = VL_RAND_RESET_I(8);
    top__DOT__uart_send = VL_RAND_RESET_I(1);
    top__DOT__uart_read = VL_RAND_RESET_I(1);
    top__DOT__axi_aw__DOT__enable = VL_RAND_RESET_I(1);
    top__DOT__axi_w__DOT__enable = VL_RAND_RESET_I(1);
    top__DOT__axi_b__DOT__enable = VL_RAND_RESET_I(1);
    top__DOT__axi_ar__DOT__enable = VL_RAND_RESET_I(1);
    top__DOT__axi_r__DOT__enable = VL_RAND_RESET_I(1);
    top__DOT__uart_w__DOT__enable = VL_RAND_RESET_I(1);
    top__DOT__uart_r__DOT__enable = VL_RAND_RESET_I(1);
    top__DOT__uart_inst__DOT__uart_tx_inst__DOT__s_axis_tready_reg = VL_RAND_RESET_I(1);
    top__DOT__uart_inst__DOT__uart_tx_inst__DOT__txd_reg = VL_RAND_RESET_I(1);
    top__DOT__uart_inst__DOT__uart_tx_inst__DOT__busy_reg = VL_RAND_RESET_I(1);
    top__DOT__uart_inst__DOT__uart_tx_inst__DOT__data_reg = VL_RAND_RESET_I(9);
    top__DOT__uart_inst__DOT__uart_tx_inst__DOT__prescale_reg = VL_RAND_RESET_I(32);
    top__DOT__uart_inst__DOT__uart_tx_inst__DOT__bit_cnt = VL_RAND_RESET_I(4);
    top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tdata_reg = VL_RAND_RESET_I(8);
    top__DOT__uart_inst__DOT__uart_rx_inst__DOT__m_axis_tvalid_reg = VL_RAND_RESET_I(1);
    top__DOT__uart_inst__DOT__uart_rx_inst__DOT__rxd_reg = VL_RAND_RESET_I(1);
    top__DOT__uart_inst__DOT__uart_rx_inst__DOT__overrun_error_reg = VL_RAND_RESET_I(1);
    top__DOT__uart_inst__DOT__uart_rx_inst__DOT__frame_error_reg = VL_RAND_RESET_I(1);
    top__DOT__uart_inst__DOT__uart_rx_inst__DOT__data_reg = VL_RAND_RESET_I(8);
    top__DOT__uart_inst__DOT__uart_rx_inst__DOT__prescale_reg = VL_RAND_RESET_I(32);
    top__DOT__uart_inst__DOT__uart_rx_inst__DOT__bit_cnt = VL_RAND_RESET_I(4);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
}
