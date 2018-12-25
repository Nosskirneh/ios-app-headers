//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTElementsCommand-Protocol.h"

@class NSString, YTIAsyncServiceAction, YTISetModelAction, YTIUpdateEntityAction;

@interface YTIElementAction : GPBMessage <YTElementsCommand>
{
}

+ (id)descriptor;
- (void)executeWithCommand:(id)arg1 context:(id)arg2 sender:(id)arg3 touch:(id)arg4;

// Remaining properties
@property(retain, nonatomic) YTIAsyncServiceAction *asyncServiceAction; // @dynamic asyncServiceAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasAsyncServiceAction; // @dynamic hasAsyncServiceAction;
@property(nonatomic) _Bool hasSetModelAction; // @dynamic hasSetModelAction;
@property(nonatomic) _Bool hasUpdateEntityAction; // @dynamic hasUpdateEntityAction;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTISetModelAction *setModelAction; // @dynamic setModelAction;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIUpdateEntityAction *updateEntityAction; // @dynamic updateEntityAction;

@end

