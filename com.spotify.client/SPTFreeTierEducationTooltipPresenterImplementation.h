//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTFreeTierEducationTooltipPresenter-Protocol.h"

@class NSString, SPTFreeTierEducationPersistentCounter;
@protocol SPTFreeTierTooltipPresenter;

@interface SPTFreeTierEducationTooltipPresenterImplementation : NSObject <SPTFreeTierEducationTooltipPresenter>
{
    id <SPTFreeTierTooltipPresenter> _tooltipPresenter;
    SPTFreeTierEducationPersistentCounter *_persistentCounter;
    NSString *_presentedTooltipIdentifier;
}

@property(copy, nonatomic) NSString *presentedTooltipIdentifier; // @synthesize presentedTooltipIdentifier=_presentedTooltipIdentifier;
@property(retain, nonatomic) SPTFreeTierEducationPersistentCounter *persistentCounter; // @synthesize persistentCounter=_persistentCounter;
@property(retain, nonatomic) id <SPTFreeTierTooltipPresenter> tooltipPresenter; // @synthesize tooltipPresenter=_tooltipPresenter;
- (void).cxx_destruct;
- (_Bool)isBlockedForTA;
- (void)dismissTooltipWithIdentifier:(id)arg1;
- (_Bool)isTooltipPresented;
- (_Bool)isTooltipPresentedWithIdentifier:(id)arg1;
- (void)tryPresentingTooltipWithIdentifier:(id)arg1 maxNumberOfTimes:(unsigned long long)arg2 presentationBlock:(CDUnknownBlockType)arg3;
- (void)presentTooltipWithIdentifier:(id)arg1 text:(id)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4 permittedArrowDirections:(unsigned long long)arg5 maxNumberOfTimes:(unsigned long long)arg6;
- (void)presentTooltipWithIdentifier:(id)arg1 contentView:(id)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4 permittedArrowDirections:(unsigned long long)arg5 duration:(long long)arg6 maxNumberOfTimes:(unsigned long long)arg7;
- (_Bool)shouldPresentWithPresentationCount:(unsigned long long)arg1 maxPresentationCount:(unsigned long long)arg2;
- (id)initWithPersistentCounter:(id)arg1 tooltipPresenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

