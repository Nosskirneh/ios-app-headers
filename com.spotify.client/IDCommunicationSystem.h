//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDHmiServiceLifecycleProtocol-Protocol.h"

@class IDEvent, IDModel, NSString;

@interface IDCommunicationSystem : NSObject <IDHmiServiceLifecycleProtocol>
{
    IDModel *_phoneNumberModel;
    IDEvent *_triggerEvent;
}

+ (id)new;
@property(readonly, nonatomic) IDEvent *triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(readonly, nonatomic) IDModel *phoneNumberModel; // @synthesize phoneNumberModel=_phoneNumberModel;
- (void).cxx_destruct;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (void)dialPhoneNumber:(id)arg1;
- (id)init;
- (id)initWithPhoneNumberModel:(id)arg1 triggerEventId:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

