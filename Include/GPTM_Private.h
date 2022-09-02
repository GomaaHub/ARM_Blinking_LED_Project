/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  GPIO_PRIVATE.h
 *       Module:  -
 *
 *  Description:  GPIO Register Macros
 *
 *********************************************************************************************************************/
#ifndef GPTM_PRIVATE_H_
#define GPTM_PRIVATE_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "GPTM_Config.h"


/**********************************************************************************************************************
 *  GPIO BASE ADDRESSES
 *********************************************************************************************************************/

#define RCGCTIMER_REG							*((volatile u32*)(0x400FE000+0x604))
#define RCGCWTIMER_REG							*((volatile u32*)(0x400FE000+0x65C))

/**********************************************************************************************************************
 *  GPTM  Base Registers Macros
 *********************************************************************************************************************/

#define GPTM0_BASE_ADDRESS					0x40030000
#define GPTM1_BASE_ADDRESS					0x40031000
#define GPTM2_BASE_ADDRESS					0x40032000
#define GPTM3_BASE_ADDRESS					0x40033000
#define GPTM4_BASE_ADDRESS					0x40034000
#define GPTM5_BASE_ADDRESS					0x40035000

#define GPTM0_WIDE_BASE_ADDRESS				0x40036000
#define GPTM1_WIDE_BASE_ADDRESS				0x40037000
#define GPTM2_WIDE_BASE_ADDRESS				0x4004C000
#define GPTM3_WIDE_BASE_ADDRESS				0x4004D000
#define GPTM4_WIDE_BASE_ADDRESS				0x4004E000
#define GPTM5_WIDE_BASE_ADDRESS				0x4004F000


/**********************************************************************************************************************
 *  Macros Of GPTM0 Register Map
 *********************************************************************************************************************/

#define GPTM0_CFG_REG						  	*((volatile u32*)(GPTM0_BASE_ADDRESS+0x000))
#define GPTM0_TAMR_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x004))
#define GPTM0_TBMR_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x008))
#define GPTM0_CTL_REG							  *((volatile u32*)(GPTM0_BASE_ADDRESS+0x00C))
#define GPTM0_SYNC_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x010))
#define GPTM0_IMR_REG               *((volatile u32*)(GPTM0_BASE_ADDRESS+0x018))
#define GPTM0_RIS_REG						  	*((volatile u32*)(GPTM0_BASE_ADDRESS+0x01C))
#define GPTM0_MIS_REG						  	*((volatile u32*)(GPTM0_BASE_ADDRESS+0x020))
#define GPTM0_ICR_REG						  	*((volatile u32*)(GPTM0_BASE_ADDRESS+0x024))
#define GPTM0_TAILR_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x028))
#define GPTM0_TBILR_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x02C))
#define GPTM0_TAMATCHR_REG						*((volatile u32*)(GPTM0_BASE_ADDRESS+0x030))
#define GPTM0_TBMATCHR_REG						*((volatile u32*)(GPTM0_BASE_ADDRESS+0x034))
#define GPTM0_TAPR_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x038))
#define GPTM0_TBPR_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x03C))
#define GPTM0_TAPMR_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x040))
#define GPTM0_TBPMR_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x044))
#define GPTM0_TAR_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x048))
#define GPTM0_TBR_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x04C))
#define GPTM0_TAV_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x050))
#define GPTM0_TBV_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x054))
#define GPTM0_RTCPD_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x058))
#define GPTM0_TAPS_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x05C))
#define GPTM0_TBPS_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x060))
#define GPTM0_TAPV_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x064))
#define GPTM0_TBPV_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0x068))
#define GPTM0_PP_REG							*((volatile u32*)(GPTM0_BASE_ADDRESS+0xFC0))

/**********************************************************************************************************************
 *  Macros Of GPTM_CTL Register
 *********************************************************************************************************************/

#define TBPWML		14
#define TBOTE		13
#define TBEVENT		10
#define TBSTALL		9
#define TBEN		8
#define TAPWML		6
#define TAOTE		5
#define RTCEN		4
#define TAEVENT		2
#define TASTALL		1
#define TAEN		0

/**********************************************************************************************************************
 *  Macros Of GPTM_ICR Register
 *********************************************************************************************************************/

#define WUECINT		16
#define TBMCINT		11
#define CBECINT		10
#define CBMCINT		9
#define TBTOCINT	8
#define TAMCINT		4
#define RTCCINT		3
#define CAECINT		2
#define CAMCINT		1
#define TATOCINT	0

/**********************************************************************************************************************
 *  Macros Of GPTM_IMR Register
 *********************************************************************************************************************/

#define WUEIM		16
#define TBMIM		11
#define CBEIM		10
#define CBMIM		9
#define TBTOIM		8
#define TAMIM		4
#define RTCIM		3
#define CAEIM		2
#define CAMIM		1
#define TATOIM		0

/**********************************************************************************************************************
 *  Macros Of GPTM_TAMR Register
 *********************************************************************************************************************/

#define TAPLO		11
#define TAMRSU		10
#define TAPWMIE		9
#define TAILD		8
#define TASNAPS		7
#define TAWOT		6
#define TAMIE		5
#define TACDIR		4
#define TAAMS		3
#define TACMR		2
#define TAMR		0


/**********************************************************************************************************************
 *  Macros Of GPTM_TBMR Register
 *********************************************************************************************************************/

#define TBPLO		11
#define TBMRSU		10
#define TBPWMIE		9
#define TBILD		8
#define TBSNAPS		7
#define TBWOT		6
#define TBMIE		5
#define TBCDIR		4
#define TBAMS		3
#define TBCMR		2
#define TBMR		0

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif  /* GPTM_PRIVATE_H_ */

/**********************************************************************************************************************
 *  END OF FILE: GPTM_PRIVATE.h
 *********************************************************************************************************************/
