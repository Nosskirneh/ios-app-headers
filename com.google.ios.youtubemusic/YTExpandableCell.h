//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "YTPageStyling-Protocol.h"

@class NSString, UIImageView;

@interface YTExpandableCell : UICollectionViewCell <YTPageStyling>
{
    UIImageView *_disclosureArrow;
    long long _pageStyle;
    _Bool _hasDisclosureArrow;
    _Bool _expanded;
    double _disclosureXPadding;
    double _disclosureYPadding;
}

+ (double)preferredHeight;
@property(nonatomic) double disclosureYPadding; // @synthesize disclosureYPadding=_disclosureYPadding;
@property(nonatomic) double disclosureXPadding; // @synthesize disclosureXPadding=_disclosureXPadding;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) _Bool hasDisclosureArrow; // @synthesize hasDisclosureArrow=_hasDisclosureArrow;
- (void).cxx_destruct;
- (id)expandCollapseIconColor;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
