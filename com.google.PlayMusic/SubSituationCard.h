//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListCard.h"

@class UIView;

@interface SubSituationCard : ListCard
{
    UIView *_separatorLine;
    _Bool _separatorHidden;
}

+ (double)itemHeightForWidth:(double)arg1;
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden; // @synthesize separatorHidden=_separatorHidden;
- (void).cxx_destruct;
- (void)layoutContent;
- (void)addSubviews;

@end
