//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "DZRDynamicPageSupplementaryView-Protocol.h"

@class DZRContentHeaderButton, NSString;
@protocol DZRDynamicPageSection;

@interface DZRDynamicPageMastheadButtonView : UICollectionReusableView <DZRDynamicPageSupplementaryView>
{
    DZRContentHeaderButton *_button;
    id <DZRDynamicPageSection> _section;
}

+ (struct CGSize)sizeWithSection:(id)arg1 usingBounds:(struct CGRect)arg2;
@property(retain, nonatomic) id <DZRDynamicPageSection> section; // @synthesize section=_section;
@property(retain, nonatomic) DZRContentHeaderButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)action:(id)arg1 didFailWithError:(id)arg2;
- (void)blink:(id)arg1;
- (void)stopObservingBlinkNotifications;
- (void)startObservingBlinkNotifications;
- (void)playerDidChangeStatus:(id)arg1;
- (void)stopObservingPlayerNotifications;
- (void)startObservingPlayerNotifications;
- (void)updatePlayButtonState;
- (void)buttonTouched:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)populateWithSection:(id)arg1 withIndexPath:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
