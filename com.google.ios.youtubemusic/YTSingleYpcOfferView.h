//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTCellActionProtocol-Protocol.h"

@class NSMutableArray, NSString, UIButton, YTFormattedStringLabel, YTISingleYpcOfferRenderer, YTQTMButton;

@interface YTSingleYpcOfferView : UIView <YTCellActionProtocol>
{
    YTFormattedStringLabel *_offerTypeLabel;
    NSMutableArray *_offerMetadatas;
    YTFormattedStringLabel *_promotionLabel;
    YTQTMButton *_offerButton;
    YTISingleYpcOfferRenderer *_renderer;
}

+ (id)labelForPromotion;
+ (id)getMetadataStringLabel:(id)arg1;
+ (id)getHeaderStringLabel:(id)arg1;
+ (double)preferredHeightForRenderer:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) YTISingleYpcOfferRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) UIButton *offerButton; // @synthesize offerButton=_offerButton;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

