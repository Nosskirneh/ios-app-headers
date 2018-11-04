//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "DZRDynamicPageSupplementaryView-Protocol.h"

@class NSString, UIImageView, UILabel, UITapGestureRecognizer;
@protocol DZRDynamicPageAction;

@interface DZRDynamicPageGotoView : UICollectionReusableView <DZRDynamicPageSupplementaryView>
{
    UILabel *_label;
    UIImageView *_chevronImageView;
    UITapGestureRecognizer *_tapRecognizer;
    id <DZRDynamicPageAction> _action;
}

+ (struct CGSize)sizeWithSection:(id)arg1 usingBounds:(struct CGRect)arg2;
@property(retain, nonatomic) id <DZRDynamicPageAction> action; // @synthesize action=_action;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) UIImageView *chevronImageView; // @synthesize chevronImageView=_chevronImageView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)action:(id)arg1 didFailWithError:(id)arg2;
- (void)taped:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)populateWithSection:(id)arg1 withIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

