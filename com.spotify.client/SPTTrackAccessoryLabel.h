//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "SPTThemableView.h"

@class NSString;

@interface SPTTrackAccessoryLabel : UILabel <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    long long _type;
}

+ (long long)trackAccessoryLabelTypeFromExplicit:(_Bool)arg1 premium:(_Bool)arg2;
+ (id)explicitLabel;
+ (id)premiumLabel;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)setText:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
