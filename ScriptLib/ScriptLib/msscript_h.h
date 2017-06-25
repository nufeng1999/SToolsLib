

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for msscript.IDL:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __msscript_h_h__
#define __msscript_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IScriptProcedure_FWD_DEFINED__
#define __IScriptProcedure_FWD_DEFINED__
typedef interface IScriptProcedure IScriptProcedure;

#endif 	/* __IScriptProcedure_FWD_DEFINED__ */


#ifndef __IScriptProcedureCollection_FWD_DEFINED__
#define __IScriptProcedureCollection_FWD_DEFINED__
typedef interface IScriptProcedureCollection IScriptProcedureCollection;

#endif 	/* __IScriptProcedureCollection_FWD_DEFINED__ */


#ifndef __IScriptModule_FWD_DEFINED__
#define __IScriptModule_FWD_DEFINED__
typedef interface IScriptModule IScriptModule;

#endif 	/* __IScriptModule_FWD_DEFINED__ */


#ifndef __IScriptModuleCollection_FWD_DEFINED__
#define __IScriptModuleCollection_FWD_DEFINED__
typedef interface IScriptModuleCollection IScriptModuleCollection;

#endif 	/* __IScriptModuleCollection_FWD_DEFINED__ */


#ifndef __IScriptError_FWD_DEFINED__
#define __IScriptError_FWD_DEFINED__
typedef interface IScriptError IScriptError;

#endif 	/* __IScriptError_FWD_DEFINED__ */


#ifndef __IScriptControl_FWD_DEFINED__
#define __IScriptControl_FWD_DEFINED__
typedef interface IScriptControl IScriptControl;

#endif 	/* __IScriptControl_FWD_DEFINED__ */


#ifndef __DScriptControlSource_FWD_DEFINED__
#define __DScriptControlSource_FWD_DEFINED__
typedef interface DScriptControlSource DScriptControlSource;

#endif 	/* __DScriptControlSource_FWD_DEFINED__ */


#ifndef __Procedure_FWD_DEFINED__
#define __Procedure_FWD_DEFINED__

#ifdef __cplusplus
typedef class Procedure Procedure;
#else
typedef struct Procedure Procedure;
#endif /* __cplusplus */

#endif 	/* __Procedure_FWD_DEFINED__ */


#ifndef __Procedures_FWD_DEFINED__
#define __Procedures_FWD_DEFINED__

#ifdef __cplusplus
typedef class Procedures Procedures;
#else
typedef struct Procedures Procedures;
#endif /* __cplusplus */

#endif 	/* __Procedures_FWD_DEFINED__ */


#ifndef __Module_FWD_DEFINED__
#define __Module_FWD_DEFINED__

#ifdef __cplusplus
typedef class Module Module;
#else
typedef struct Module Module;
#endif /* __cplusplus */

#endif 	/* __Module_FWD_DEFINED__ */


#ifndef __Modules_FWD_DEFINED__
#define __Modules_FWD_DEFINED__

#ifdef __cplusplus
typedef class Modules Modules;
#else
typedef struct Modules Modules;
#endif /* __cplusplus */

#endif 	/* __Modules_FWD_DEFINED__ */


#ifndef __Error_FWD_DEFINED__
#define __Error_FWD_DEFINED__

#ifdef __cplusplus
typedef class Error Error;
#else
typedef struct Error Error;
#endif /* __cplusplus */

#endif 	/* __Error_FWD_DEFINED__ */


#ifndef __ScriptControl_FWD_DEFINED__
#define __ScriptControl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScriptControl ScriptControl;
#else
typedef struct ScriptControl ScriptControl;
#endif /* __cplusplus */

#endif 	/* __ScriptControl_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __MSScriptControl_LIBRARY_DEFINED__
#define __MSScriptControl_LIBRARY_DEFINED__

/* library MSScriptControl */
/* [helpcontext][helpfile][helpstring][version][uuid] */ 








typedef /* [public][public][public][helpcontext][helpstring] */ 
enum __MIDL___MIDL_itf_msscript_0001_0000_0001
    {
        Initialized	= 0,
        Connected	= 1
    } 	ScriptControlStates;


EXTERN_C const IID LIBID_MSScriptControl;

#ifndef __IScriptProcedure_INTERFACE_DEFINED__
#define __IScriptProcedure_INTERFACE_DEFINED__

/* interface IScriptProcedure */
/* [object][oleautomation][nonextensible][dual][hidden][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IScriptProcedure;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("70841C73-067D-11D0-95D8-00A02463AB28")
    IScriptProcedure : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_NumArgs( 
            /* [retval][out] */ long *pcArgs) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HasReturnValue( 
            /* [retval][out] */ VARIANT_BOOL *pfHasReturnValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IScriptProcedureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IScriptProcedure * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IScriptProcedure * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IScriptProcedure * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IScriptProcedure * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IScriptProcedure * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IScriptProcedure * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IScriptProcedure * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IScriptProcedure * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumArgs )( 
            IScriptProcedure * This,
            /* [retval][out] */ long *pcArgs);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HasReturnValue )( 
            IScriptProcedure * This,
            /* [retval][out] */ VARIANT_BOOL *pfHasReturnValue);
        
        END_INTERFACE
    } IScriptProcedureVtbl;

    interface IScriptProcedure
    {
        CONST_VTBL struct IScriptProcedureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScriptProcedure_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IScriptProcedure_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IScriptProcedure_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IScriptProcedure_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IScriptProcedure_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IScriptProcedure_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IScriptProcedure_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IScriptProcedure_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IScriptProcedure_get_NumArgs(This,pcArgs)	\
    ( (This)->lpVtbl -> get_NumArgs(This,pcArgs) ) 

#define IScriptProcedure_get_HasReturnValue(This,pfHasReturnValue)	\
    ( (This)->lpVtbl -> get_HasReturnValue(This,pfHasReturnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IScriptProcedure_INTERFACE_DEFINED__ */


#ifndef __IScriptProcedureCollection_INTERFACE_DEFINED__
#define __IScriptProcedureCollection_INTERFACE_DEFINED__

/* interface IScriptProcedureCollection */
/* [object][oleautomation][nonextensible][dual][hidden][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IScriptProcedureCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("70841C71-067D-11D0-95D8-00A02463AB28")
    IScriptProcedureCollection : public IDispatch
    {
    public:
        virtual /* [hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppenumProcedures) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IScriptProcedure **ppdispProcedure) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IScriptProcedureCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IScriptProcedureCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IScriptProcedureCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IScriptProcedureCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IScriptProcedureCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IScriptProcedureCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IScriptProcedureCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IScriptProcedureCollection * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IScriptProcedureCollection * This,
            /* [retval][out] */ IUnknown **ppenumProcedures);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IScriptProcedureCollection * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IScriptProcedure **ppdispProcedure);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IScriptProcedureCollection * This,
            /* [retval][out] */ long *plCount);
        
        END_INTERFACE
    } IScriptProcedureCollectionVtbl;

    interface IScriptProcedureCollection
    {
        CONST_VTBL struct IScriptProcedureCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScriptProcedureCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IScriptProcedureCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IScriptProcedureCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IScriptProcedureCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IScriptProcedureCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IScriptProcedureCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IScriptProcedureCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IScriptProcedureCollection_get__NewEnum(This,ppenumProcedures)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppenumProcedures) ) 

#define IScriptProcedureCollection_get_Item(This,Index,ppdispProcedure)	\
    ( (This)->lpVtbl -> get_Item(This,Index,ppdispProcedure) ) 

#define IScriptProcedureCollection_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IScriptProcedureCollection_INTERFACE_DEFINED__ */


#ifndef __IScriptModule_INTERFACE_DEFINED__
#define __IScriptModule_INTERFACE_DEFINED__

/* interface IScriptModule */
/* [object][oleautomation][nonextensible][dual][hidden][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IScriptModule;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("70841C70-067D-11D0-95D8-00A02463AB28")
    IScriptModule : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CodeObject( 
            /* [retval][out] */ IDispatch **ppdispObject) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Procedures( 
            /* [retval][out] */ IScriptProcedureCollection **ppdispProcedures) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE AddCode( 
            /* [in] */ BSTR Code) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Eval( 
            /* [in] */ BSTR Expression,
            /* [retval][out] */ VARIANT *pvarResult) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE ExecuteStatement( 
            /* [in] */ BSTR Statement) = 0;
        
        virtual /* [helpcontext][helpstring][vararg][id] */ HRESULT STDMETHODCALLTYPE Run( 
            /* [in] */ BSTR ProcedureName,
            /* [in] */ SAFEARRAY * *Parameters,
            /* [retval][out] */ VARIANT *pvarResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IScriptModuleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IScriptModule * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IScriptModule * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IScriptModule * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IScriptModule * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IScriptModule * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IScriptModule * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IScriptModule * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IScriptModule * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CodeObject )( 
            IScriptModule * This,
            /* [retval][out] */ IDispatch **ppdispObject);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Procedures )( 
            IScriptModule * This,
            /* [retval][out] */ IScriptProcedureCollection **ppdispProcedures);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddCode )( 
            IScriptModule * This,
            /* [in] */ BSTR Code);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Eval )( 
            IScriptModule * This,
            /* [in] */ BSTR Expression,
            /* [retval][out] */ VARIANT *pvarResult);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExecuteStatement )( 
            IScriptModule * This,
            /* [in] */ BSTR Statement);
        
        /* [helpcontext][helpstring][vararg][id] */ HRESULT ( STDMETHODCALLTYPE *Run )( 
            IScriptModule * This,
            /* [in] */ BSTR ProcedureName,
            /* [in] */ SAFEARRAY * *Parameters,
            /* [retval][out] */ VARIANT *pvarResult);
        
        END_INTERFACE
    } IScriptModuleVtbl;

    interface IScriptModule
    {
        CONST_VTBL struct IScriptModuleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScriptModule_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IScriptModule_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IScriptModule_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IScriptModule_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IScriptModule_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IScriptModule_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IScriptModule_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IScriptModule_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IScriptModule_get_CodeObject(This,ppdispObject)	\
    ( (This)->lpVtbl -> get_CodeObject(This,ppdispObject) ) 

#define IScriptModule_get_Procedures(This,ppdispProcedures)	\
    ( (This)->lpVtbl -> get_Procedures(This,ppdispProcedures) ) 

#define IScriptModule_AddCode(This,Code)	\
    ( (This)->lpVtbl -> AddCode(This,Code) ) 

#define IScriptModule_Eval(This,Expression,pvarResult)	\
    ( (This)->lpVtbl -> Eval(This,Expression,pvarResult) ) 

#define IScriptModule_ExecuteStatement(This,Statement)	\
    ( (This)->lpVtbl -> ExecuteStatement(This,Statement) ) 

#define IScriptModule_Run(This,ProcedureName,Parameters,pvarResult)	\
    ( (This)->lpVtbl -> Run(This,ProcedureName,Parameters,pvarResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IScriptModule_INTERFACE_DEFINED__ */


#ifndef __IScriptModuleCollection_INTERFACE_DEFINED__
#define __IScriptModuleCollection_INTERFACE_DEFINED__

/* interface IScriptModuleCollection */
/* [object][oleautomation][nonextensible][dual][hidden][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IScriptModuleCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("70841C6F-067D-11D0-95D8-00A02463AB28")
    IScriptModuleCollection : public IDispatch
    {
    public:
        virtual /* [hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppenumContexts) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IScriptModule **ppmod) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ BSTR Name,
            /* [optional][in] */ VARIANT *Object,
            /* [retval][out] */ IScriptModule **ppmod) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IScriptModuleCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IScriptModuleCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IScriptModuleCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IScriptModuleCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IScriptModuleCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IScriptModuleCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IScriptModuleCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IScriptModuleCollection * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IScriptModuleCollection * This,
            /* [retval][out] */ IUnknown **ppenumContexts);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IScriptModuleCollection * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ IScriptModule **ppmod);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IScriptModuleCollection * This,
            /* [retval][out] */ long *plCount);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IScriptModuleCollection * This,
            /* [in] */ BSTR Name,
            /* [optional][in] */ VARIANT *Object,
            /* [retval][out] */ IScriptModule **ppmod);
        
        END_INTERFACE
    } IScriptModuleCollectionVtbl;

    interface IScriptModuleCollection
    {
        CONST_VTBL struct IScriptModuleCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScriptModuleCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IScriptModuleCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IScriptModuleCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IScriptModuleCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IScriptModuleCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IScriptModuleCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IScriptModuleCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IScriptModuleCollection_get__NewEnum(This,ppenumContexts)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppenumContexts) ) 

#define IScriptModuleCollection_get_Item(This,Index,ppmod)	\
    ( (This)->lpVtbl -> get_Item(This,Index,ppmod) ) 

#define IScriptModuleCollection_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define IScriptModuleCollection_Add(This,Name,Object,ppmod)	\
    ( (This)->lpVtbl -> Add(This,Name,Object,ppmod) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IScriptModuleCollection_INTERFACE_DEFINED__ */


#ifndef __IScriptError_INTERFACE_DEFINED__
#define __IScriptError_INTERFACE_DEFINED__

/* interface IScriptError */
/* [object][oleautomation][nonextensible][dual][hidden][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IScriptError;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("70841C78-067D-11D0-95D8-00A02463AB28")
    IScriptError : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Number( 
            /* [retval][out] */ long *plNumber) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ BSTR *pbstrSource) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pbstrDescription) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HelpFile( 
            /* [retval][out] */ BSTR *pbstrHelpFile) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HelpContext( 
            /* [retval][out] */ long *plHelpContext) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *pbstrText) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Line( 
            /* [retval][out] */ long *plLine) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Column( 
            /* [retval][out] */ long *plColumn) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IScriptErrorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IScriptError * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IScriptError * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IScriptError * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IScriptError * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IScriptError * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IScriptError * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IScriptError * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Number )( 
            IScriptError * This,
            /* [retval][out] */ long *plNumber);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IScriptError * This,
            /* [retval][out] */ BSTR *pbstrSource);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IScriptError * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HelpFile )( 
            IScriptError * This,
            /* [retval][out] */ BSTR *pbstrHelpFile);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HelpContext )( 
            IScriptError * This,
            /* [retval][out] */ long *plHelpContext);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IScriptError * This,
            /* [retval][out] */ BSTR *pbstrText);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Line )( 
            IScriptError * This,
            /* [retval][out] */ long *plLine);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Column )( 
            IScriptError * This,
            /* [retval][out] */ long *plColumn);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IScriptError * This);
        
        END_INTERFACE
    } IScriptErrorVtbl;

    interface IScriptError
    {
        CONST_VTBL struct IScriptErrorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScriptError_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IScriptError_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IScriptError_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IScriptError_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IScriptError_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IScriptError_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IScriptError_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IScriptError_get_Number(This,plNumber)	\
    ( (This)->lpVtbl -> get_Number(This,plNumber) ) 

#define IScriptError_get_Source(This,pbstrSource)	\
    ( (This)->lpVtbl -> get_Source(This,pbstrSource) ) 

#define IScriptError_get_Description(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) ) 

#define IScriptError_get_HelpFile(This,pbstrHelpFile)	\
    ( (This)->lpVtbl -> get_HelpFile(This,pbstrHelpFile) ) 

#define IScriptError_get_HelpContext(This,plHelpContext)	\
    ( (This)->lpVtbl -> get_HelpContext(This,plHelpContext) ) 

#define IScriptError_get_Text(This,pbstrText)	\
    ( (This)->lpVtbl -> get_Text(This,pbstrText) ) 

#define IScriptError_get_Line(This,plLine)	\
    ( (This)->lpVtbl -> get_Line(This,plLine) ) 

#define IScriptError_get_Column(This,plColumn)	\
    ( (This)->lpVtbl -> get_Column(This,plColumn) ) 

#define IScriptError_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IScriptError_INTERFACE_DEFINED__ */


#ifndef __IScriptControl_INTERFACE_DEFINED__
#define __IScriptControl_INTERFACE_DEFINED__

/* interface IScriptControl */
/* [object][oleautomation][nonextensible][dual][hidden][helpcontext][helpstring][uuid] */ 


EXTERN_C const IID IID_IScriptControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0E59F1D3-1FBE-11D0-8FF2-00A0D10038BC")
    IScriptControl : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Language( 
            /* [retval][out] */ BSTR *pbstrLanguage) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Language( 
            /* [in] */ BSTR pbstrLanguage) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ ScriptControlStates *pssState) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_State( 
            /* [in] */ ScriptControlStates pssState) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SitehWnd( 
            /* [in] */ long phwnd) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SitehWnd( 
            /* [retval][out] */ long *phwnd) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Timeout( 
            /* [retval][out] */ long *plMilleseconds) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Timeout( 
            /* [in] */ long plMilleseconds) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AllowUI( 
            /* [retval][out] */ VARIANT_BOOL *pfAllowUI) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AllowUI( 
            /* [in] */ VARIANT_BOOL pfAllowUI) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UseSafeSubset( 
            /* [retval][out] */ VARIANT_BOOL *pfUseSafeSubset) = 0;
        
        virtual /* [helpcontext][helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_UseSafeSubset( 
            /* [in] */ VARIANT_BOOL pfUseSafeSubset) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Modules( 
            /* [retval][out] */ IScriptModuleCollection **ppmods) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Error( 
            /* [retval][out] */ IScriptError **ppse) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CodeObject( 
            /* [retval][out] */ IDispatch **ppdispObject) = 0;
        
        virtual /* [helpcontext][helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Procedures( 
            /* [retval][out] */ IScriptProcedureCollection **ppdispProcedures) = 0;
        
        virtual /* [hidden][id] */ HRESULT STDMETHODCALLTYPE _AboutBox( void) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE AddObject( 
            /* [in] */ BSTR Name,
            /* [in] */ IDispatch *Object,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL AddMembers = 0) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE AddCode( 
            /* [in] */ BSTR Code) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE Eval( 
            /* [in] */ BSTR Expression,
            /* [retval][out] */ VARIANT *pvarResult) = 0;
        
        virtual /* [helpcontext][helpstring][id] */ HRESULT STDMETHODCALLTYPE ExecuteStatement( 
            /* [in] */ BSTR Statement) = 0;
        
        virtual /* [helpcontext][helpstring][vararg][id] */ HRESULT STDMETHODCALLTYPE Run( 
            /* [in] */ BSTR ProcedureName,
            /* [in] */ SAFEARRAY * *Parameters,
            /* [retval][out] */ VARIANT *pvarResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IScriptControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IScriptControl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IScriptControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IScriptControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IScriptControl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IScriptControl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IScriptControl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IScriptControl * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Language )( 
            IScriptControl * This,
            /* [retval][out] */ BSTR *pbstrLanguage);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Language )( 
            IScriptControl * This,
            /* [in] */ BSTR pbstrLanguage);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            IScriptControl * This,
            /* [retval][out] */ ScriptControlStates *pssState);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_State )( 
            IScriptControl * This,
            /* [in] */ ScriptControlStates pssState);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SitehWnd )( 
            IScriptControl * This,
            /* [in] */ long phwnd);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SitehWnd )( 
            IScriptControl * This,
            /* [retval][out] */ long *phwnd);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Timeout )( 
            IScriptControl * This,
            /* [retval][out] */ long *plMilleseconds);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Timeout )( 
            IScriptControl * This,
            /* [in] */ long plMilleseconds);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AllowUI )( 
            IScriptControl * This,
            /* [retval][out] */ VARIANT_BOOL *pfAllowUI);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AllowUI )( 
            IScriptControl * This,
            /* [in] */ VARIANT_BOOL pfAllowUI);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UseSafeSubset )( 
            IScriptControl * This,
            /* [retval][out] */ VARIANT_BOOL *pfUseSafeSubset);
        
        /* [helpcontext][helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UseSafeSubset )( 
            IScriptControl * This,
            /* [in] */ VARIANT_BOOL pfUseSafeSubset);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Modules )( 
            IScriptControl * This,
            /* [retval][out] */ IScriptModuleCollection **ppmods);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Error )( 
            IScriptControl * This,
            /* [retval][out] */ IScriptError **ppse);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CodeObject )( 
            IScriptControl * This,
            /* [retval][out] */ IDispatch **ppdispObject);
        
        /* [helpcontext][helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Procedures )( 
            IScriptControl * This,
            /* [retval][out] */ IScriptProcedureCollection **ppdispProcedures);
        
        /* [hidden][id] */ HRESULT ( STDMETHODCALLTYPE *_AboutBox )( 
            IScriptControl * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddObject )( 
            IScriptControl * This,
            /* [in] */ BSTR Name,
            /* [in] */ IDispatch *Object,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL AddMembers);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IScriptControl * This);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddCode )( 
            IScriptControl * This,
            /* [in] */ BSTR Code);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Eval )( 
            IScriptControl * This,
            /* [in] */ BSTR Expression,
            /* [retval][out] */ VARIANT *pvarResult);
        
        /* [helpcontext][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExecuteStatement )( 
            IScriptControl * This,
            /* [in] */ BSTR Statement);
        
        /* [helpcontext][helpstring][vararg][id] */ HRESULT ( STDMETHODCALLTYPE *Run )( 
            IScriptControl * This,
            /* [in] */ BSTR ProcedureName,
            /* [in] */ SAFEARRAY * *Parameters,
            /* [retval][out] */ VARIANT *pvarResult);
        
        END_INTERFACE
    } IScriptControlVtbl;

    interface IScriptControl
    {
        CONST_VTBL struct IScriptControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScriptControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IScriptControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IScriptControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IScriptControl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IScriptControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IScriptControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IScriptControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IScriptControl_get_Language(This,pbstrLanguage)	\
    ( (This)->lpVtbl -> get_Language(This,pbstrLanguage) ) 

#define IScriptControl_put_Language(This,pbstrLanguage)	\
    ( (This)->lpVtbl -> put_Language(This,pbstrLanguage) ) 

#define IScriptControl_get_State(This,pssState)	\
    ( (This)->lpVtbl -> get_State(This,pssState) ) 

#define IScriptControl_put_State(This,pssState)	\
    ( (This)->lpVtbl -> put_State(This,pssState) ) 

#define IScriptControl_put_SitehWnd(This,phwnd)	\
    ( (This)->lpVtbl -> put_SitehWnd(This,phwnd) ) 

#define IScriptControl_get_SitehWnd(This,phwnd)	\
    ( (This)->lpVtbl -> get_SitehWnd(This,phwnd) ) 

#define IScriptControl_get_Timeout(This,plMilleseconds)	\
    ( (This)->lpVtbl -> get_Timeout(This,plMilleseconds) ) 

#define IScriptControl_put_Timeout(This,plMilleseconds)	\
    ( (This)->lpVtbl -> put_Timeout(This,plMilleseconds) ) 

#define IScriptControl_get_AllowUI(This,pfAllowUI)	\
    ( (This)->lpVtbl -> get_AllowUI(This,pfAllowUI) ) 

#define IScriptControl_put_AllowUI(This,pfAllowUI)	\
    ( (This)->lpVtbl -> put_AllowUI(This,pfAllowUI) ) 

#define IScriptControl_get_UseSafeSubset(This,pfUseSafeSubset)	\
    ( (This)->lpVtbl -> get_UseSafeSubset(This,pfUseSafeSubset) ) 

#define IScriptControl_put_UseSafeSubset(This,pfUseSafeSubset)	\
    ( (This)->lpVtbl -> put_UseSafeSubset(This,pfUseSafeSubset) ) 

#define IScriptControl_get_Modules(This,ppmods)	\
    ( (This)->lpVtbl -> get_Modules(This,ppmods) ) 

#define IScriptControl_get_Error(This,ppse)	\
    ( (This)->lpVtbl -> get_Error(This,ppse) ) 

#define IScriptControl_get_CodeObject(This,ppdispObject)	\
    ( (This)->lpVtbl -> get_CodeObject(This,ppdispObject) ) 

#define IScriptControl_get_Procedures(This,ppdispProcedures)	\
    ( (This)->lpVtbl -> get_Procedures(This,ppdispProcedures) ) 

#define IScriptControl__AboutBox(This)	\
    ( (This)->lpVtbl -> _AboutBox(This) ) 

#define IScriptControl_AddObject(This,Name,Object,AddMembers)	\
    ( (This)->lpVtbl -> AddObject(This,Name,Object,AddMembers) ) 

#define IScriptControl_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IScriptControl_AddCode(This,Code)	\
    ( (This)->lpVtbl -> AddCode(This,Code) ) 

#define IScriptControl_Eval(This,Expression,pvarResult)	\
    ( (This)->lpVtbl -> Eval(This,Expression,pvarResult) ) 

#define IScriptControl_ExecuteStatement(This,Statement)	\
    ( (This)->lpVtbl -> ExecuteStatement(This,Statement) ) 

#define IScriptControl_Run(This,ProcedureName,Parameters,pvarResult)	\
    ( (This)->lpVtbl -> Run(This,ProcedureName,Parameters,pvarResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IScriptControl_INTERFACE_DEFINED__ */


#ifndef __DScriptControlSource_DISPINTERFACE_DEFINED__
#define __DScriptControlSource_DISPINTERFACE_DEFINED__

/* dispinterface DScriptControlSource */
/* [hidden][uuid] */ 


EXTERN_C const IID DIID_DScriptControlSource;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("8B167D60-8605-11D0-ABCB-00A0C90FFFC0")
    DScriptControlSource : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DScriptControlSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            DScriptControlSource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            DScriptControlSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            DScriptControlSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            DScriptControlSource * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            DScriptControlSource * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            DScriptControlSource * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            DScriptControlSource * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } DScriptControlSourceVtbl;

    interface DScriptControlSource
    {
        CONST_VTBL struct DScriptControlSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DScriptControlSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define DScriptControlSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define DScriptControlSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define DScriptControlSource_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define DScriptControlSource_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define DScriptControlSource_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define DScriptControlSource_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DScriptControlSource_DISPINTERFACE_DEFINED__ */



#ifndef __ScriptControlConstants_MODULE_DEFINED__
#define __ScriptControlConstants_MODULE_DEFINED__


/* module ScriptControlConstants */
/* [helpcontext][helpstring][uuid][dllname] */ 

/* [helpcontext][helpstring] */ const LPSTR GlobalModule	=	"Global";

/* [helpcontext][helpstring] */ const long NoTimeout	=	0xffffffff;

#endif /* __ScriptControlConstants_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_Procedure;

#ifdef __cplusplus

class DECLSPEC_UUID("0E59F1DA-1FBE-11D0-8FF2-00A0D10038BC")
Procedure;
#endif

EXTERN_C const CLSID CLSID_Procedures;

#ifdef __cplusplus

class DECLSPEC_UUID("0E59F1DB-1FBE-11D0-8FF2-00A0D10038BC")
Procedures;
#endif

EXTERN_C const CLSID CLSID_Module;

#ifdef __cplusplus

class DECLSPEC_UUID("0E59F1DC-1FBE-11D0-8FF2-00A0D10038BC")
Module;
#endif

EXTERN_C const CLSID CLSID_Modules;

#ifdef __cplusplus

class DECLSPEC_UUID("0E59F1DD-1FBE-11D0-8FF2-00A0D10038BC")
Modules;
#endif

EXTERN_C const CLSID CLSID_Error;

#ifdef __cplusplus

class DECLSPEC_UUID("0E59F1DE-1FBE-11D0-8FF2-00A0D10038BC")
Error;
#endif

EXTERN_C const CLSID CLSID_ScriptControl;

#ifdef __cplusplus

class DECLSPEC_UUID("0E59F1D5-1FBE-11D0-8FF2-00A0D10038BC")
ScriptControl;
#endif
#endif /* __MSScriptControl_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


