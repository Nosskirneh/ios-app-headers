//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GridCell_n.h"

@class NSDictionary, NSIndexPath, NSMutableDictionary, SaavnAdView, SaavnVC_n, UIView;

@interface SideScrollerAd : GridCell_n
{
    _Bool cellSetUp;
    _Bool isCondensed;
    _Bool isWidescreen;
    int size;
    UIView *adWrapper;
    NSIndexPath *indexPath;
    NSDictionary *sectionData;
    SaavnAdView *_adView;
    SaavnVC_n *_parent;
    NSMutableDictionary *_targetParams;
}

+ (id)reuseIdForSize:(int)arg1 atIndexPath:(id)arg2 andTag:(long long)arg3;
+ (int)getAdSize:(id)arg1;
+ (id)reuseId;
@property(retain, nonatomic) NSMutableDictionary *targetParams; // @synthesize targetParams=_targetParams;
@property(retain, nonatomic) SaavnVC_n *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) SaavnAdView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateUIMode;
- (void)setData:(id)arg1 withIndex:(long long)arg2;
- (void)setSectionData:(id)arg1 withIndexPath:(id)arg2;
- (void)setUpCellwithMeta:(_Bool)arg1 asCondensed:(_Bool)arg2 asWideScreen:(_Bool)arg3 data:(id)arg4 parent:(id)arg5 index:(id)arg6 andTag:(long long)arg7;

@end

