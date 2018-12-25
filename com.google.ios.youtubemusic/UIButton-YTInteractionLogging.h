//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "YTInteractionLoggingButtonProtocol-Protocol.h"

@class GPBMessage, NSString;
@protocol YTInteractionLoggingButtonDelegate;

@interface UIButton (YTInteractionLogging) <YTInteractionLoggingButtonProtocol>
- (_Bool)shoudLogClickForEvent:(id)arg1;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
@property(nonatomic) _Bool implicitClickLogging;
@property(nonatomic, getter=isCounterfactual) _Bool counterfactual;
@property(nonatomic) __weak id <YTInteractionLoggingButtonDelegate> interactionLoggingDelegate;
- (id)visualElement;
@property(nonatomic) int veCounter;
@property(nonatomic) int dataElementVEType;
@property(nonatomic) int veType;
@property(nonatomic) int elementIndex;
@property(copy, nonatomic) CDUnknownBlockType clientDataBlock;
@property(retain, nonatomic) GPBMessage *trackableDataElementObject;
@property(retain, nonatomic) GPBMessage *trackableObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
