//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GenericTableViewCell.h"

@class ANGLink;

@interface ANGLinkTableViewCell : GenericTableViewCell
{
    _Bool _isSmallImageView;
    ANGLink *_link;
}

@property(nonatomic) _Bool isSmallImageView; // @synthesize isSmallImageView=_isSmallImageView;
@property(retain, nonatomic) ANGLink *link; // @synthesize link=_link;
- (void).cxx_destruct;
- (void)addSeparatorsAtRow:(unsigned long long)arg1 withColor:(id)arg2 alpha:(double)arg3;
- (void)validateConstraints;
- (void)refreshLinkCount;
- (void)applyNumberOfItems;
- (void)addOrRemoveGradientLayerForOfflineRecLink;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)addRightLabel:(id)arg1 textColor:(id)arg2 backgroundColor:(id)arg3;
- (void)addRightLabel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 additionalParams:(id)arg3;

@end

