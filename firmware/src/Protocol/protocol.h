#ifndef _PROTOCOL_H    
#define _PROTOCOL_H

#include "definitions.h"  
#include "application.h"  
#include "Shared/CAN/MET_can_protocol.h"

#undef ext
#undef ext_static

#ifdef _PROTOCOL_C
    #define ext
    #define ext_static static 
#else
    #define ext extern
    #define ext_static extern
#endif

/*!
 * \defgroup protocolModule CAN Communication Protocol Module
 *
 * \ingroup applicationModule
 * 
 * 
 * This Module implements the functions 
 * of the PCB/22-304 Software Communication protocol specifications.
 * 
 * ## Dependencies
 * 
 * This module requires the following library modules:
 * - Shared/CAN/MET_Can_Protocol.c
 * - Shared/CAN/MET_Can_Protocol.h
 * 
 * The application shall define the following labels into 
 * the application.h header file in the project root directory, where the main.c file
 * is located:
 * 
 * + #define MET_CAN_APP_MAJ_REV : Revision Major Number
 * + #define MET_CAN_APP_MIN_REV : Revision Minor Number
 * + #define MET_CAN_APP_SUB_REV : Revision build Number
 * + #define MET_CAN_APP_DEVICE_ID : Application DEVICE CAN Id address
 * + #define MET_CAN_STATUS_REGISTERS : Defines the total number of implemented STATUS registers 
 * + #define MET_CAN_DATA_REGISTERS : Defines the total number of implemented Application DATA registers 
 * + #define MET_CAN_PARAM_REGISTERS :  Defines the total number of implemented PARAMETER registers 
 * 
 * ## Communication setting
 * 
 * The CAN communication is based on the following  characteristics:
 * 
 * - Standard (not Flexible) communication;
 * - Standard frame (11 bit ID);
 * - Baude Rate: 1Mb/s;
 * - Can ID reception address: 0x154;
 * 
 * ## Protocol description
 * 
 * The Application implements the protocol Items 
 * described in the PCB/22-304 Software Communication protocol specifications.
 * 
 * In this chapter it will be briefly described the protocol Items.
 * For details refer to the document specification.
 * 
 * ### Application STATUS Registers
 * 
 * The requested status registers are :
 * 
 * |REGISTER NAME|IDX|DESCRIPTION|
 * |:--|:--|:--|
 * ||
 * 
 * ### DATA Registers
 * 
 * The available DATA registers are:
 *
 * |REGISTER NAME|IDX|DESCRIPTION|
 * |:--|:--|:--|
 * ||
 * 
 * ### PARAMETER Registers
 * 
 * ### COMMAND Register
 * 
 *  @{
 * 
 */

    /**
     * \defgroup moduleInterface CAN Protocol API interface
     * 
     * This section describes the functions implementing the Protocol module.
     * 
     *  @{
     */
        /// This is the Protocol initialization function
        ext void ApplicationProtocolInit ( void);

        /// This is the Main Loop protocol function
        ext void  ApplicationProtocolLoop(void);

    /** @}*/  // moduleInterface
    

    /** \defgroup STATUS_Register STATUS Registers Definition
     *  
     *  This section describes the implementation of the Application STATUS Registers 
     *  @{
     */
        
   

    /** @}*/  // STATUS_Register

    /** \defgroup DATA_Register DATA Registers Definition
     *  
     *  This section describes the implementation of the Application DATA Registers 
     *  @{
     */

        
       
    /** @}*/  // DATA_Register

    /** \defgroup PARAM_Register PARAMETER Registers Definition
     *  
     *  This section describes the implementation of the Application PARAMETER Registers 
     *  @{
     */
        
    /**
     * Parameter index enumeration
     */            
    typedef enum{
        NO_PARAM = 0, //!< This is the parameter setting the delay between power On Off events
    }PROTO_PARAMETERS_t;
    
        
    /** @}*/  // PARAM_Register
        
     /** \defgroup COMMAND_exec COMMAND Execution Definition
     *  
     *  This section describes the Application Command Execution codes
     *  @{
     */
    typedef enum{
      FIRST_COMMAND = 1,    // Replace this with the first command
    }PROTO_COMMAND_ENUM_t;
    
    typedef enum{
        PROTO_COMMAND_NO_ERR = 0,            
    }PROTO_COMMAND_ERROR_ENUM_t;

    ext void Protocol_7280_us_callback(void);
        
        
    /** @}*/  // COMMAND_exec

        


         
/** @}*/ // protocolModule
#endif 