//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSNumber;
@protocol OS_dispatch_queue;

@interface PDLSessionContext : NSObject
{
    _Bool _shouldFilterOwnerFields;
    int _sendkitEntryPoint;
    NSObject<OS_dispatch_queue> *_callbackDeliveryQueue;
    NSNumber *_submissionID;
    NSMutableSet *_selectedFieldsSet;
}

@property(retain, nonatomic) NSMutableSet *selectedFieldsSet; // @synthesize selectedFieldsSet=_selectedFieldsSet;
@property(nonatomic) int sendkitEntryPoint; // @synthesize sendkitEntryPoint=_sendkitEntryPoint;
@property(readonly, nonatomic) NSNumber *submissionID; // @synthesize submissionID=_submissionID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackDeliveryQueue; // @synthesize callbackDeliveryQueue=_callbackDeliveryQueue;
@property(readonly, nonatomic) _Bool shouldFilterOwnerFields; // @synthesize shouldFilterOwnerFields=_shouldFilterOwnerFields;
- (void).cxx_destruct;
- (id)initWithSharedWithFields:(id)arg1 selectedFields:(id)arg2 shouldFilterOwnerFields:(_Bool)arg3 submissionID:(id)arg4 callbackDeliveryQueue:(id)arg5;
- (id)initWithSharedWithFields:(id)arg1 selectedFields:(id)arg2 shouldFilterOwnerFields:(_Bool)arg3 submissionID:(id)arg4;
- (id)initWithSharedWithFields:(id)arg1 selectedFields:(id)arg2 shouldFilterOwnerFields:(_Bool)arg3;
- (id)selectedFields;
- (void)addSelectedFields:(id)arg1;
- (void)addSelectedField:(id)arg1;
- (void)removeSelectedField:(id)arg1;

@end

