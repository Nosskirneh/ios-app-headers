//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDHmiServiceDelegate.h"

@class IDHmiService, IDVehicleInfo, NSObject<OS_dispatch_queue>, NSString;

@interface IDWidgetHmiService : NSObject <IDHmiServiceDelegate>
{
    IDVehicleInfo *_vehicleInfo;
    IDHmiService *_hmiService;
    NSObject<OS_dispatch_queue> *_highPriorityQueue;
    NSObject<OS_dispatch_queue> *_defaultPriorityQueue;
    NSObject<OS_dispatch_queue> *_lowPriorityQueue;
}

@property(readonly) NSObject<OS_dispatch_queue> *lowPriorityQueue; // @synthesize lowPriorityQueue=_lowPriorityQueue;
@property(readonly) NSObject<OS_dispatch_queue> *defaultPriorityQueue; // @synthesize defaultPriorityQueue=_defaultPriorityQueue;
@property(readonly) NSObject<OS_dispatch_queue> *highPriorityQueue; // @synthesize highPriorityQueue=_highPriorityQueue;
@property(retain, nonatomic) IDHmiService *hmiService; // @synthesize hmiService=_hmiService;
@property(readonly) IDVehicleInfo *vehicleInfo; // @synthesize vehicleInfo=_vehicleInfo;
- (void).cxx_destruct;
- (long long)runLoopPriorityForTableData:(id)arg1;
- (unsigned long long)runLoopPriorityForVariantMap:(id)arg1;
- (unsigned long long)runLoopPriorityForVariantData:(id)arg1;
- (id)dispatchQueueForRunLoopPriority:(unsigned long long)arg1;
- (void)resumeQueuesWithLowerPriorityAsQueue:(id)arg1;
- (void)suspendQueuesWithLowerPriorityAsQueue:(id)arg1;
- (_Bool)hmiService:(id)arg1 shouldConfirmActionEvent:(unsigned long long)arg2;
- (void)triggerHmiEvent:(unsigned long long)arg1 parameterMap:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setProperty:(unsigned long long)arg1 forComponent:(long long)arg2 variantMap:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setListModel:(long long)arg1 tableData:(id)arg2 fromRow:(unsigned long long)arg3 rows:(unsigned long long)arg4 fromColumn:(unsigned long long)arg5 columns:(unsigned long long)arg6 totalRows:(unsigned long long)arg7 totalColumns:(unsigned long long)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (void)setDataModel:(long long)arg1 variantData:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setTargetModel:(long long)arg1 variantData:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeHandlerForActionEvent:(unsigned long long)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)removeAllActionEventHandlersForTarget:(id)arg1;
- (void)removeHandlerForHmiEvent:(long long)arg1 component:(unsigned long long)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)removeAllHmiEventHandlersForTarget:(id)arg1;
- (void)addHandlerForActionEvent:(unsigned long long)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)addHandlerForHmiEvent:(unsigned long long)arg1 component:(unsigned long long)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithHmiService:(id)arg1 vehicleInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
