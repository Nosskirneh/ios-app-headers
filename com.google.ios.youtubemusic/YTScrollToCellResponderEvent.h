//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class YTCollectionViewCell;

@interface YTScrollToCellResponderEvent : YTResponderEvent
{
    YTCollectionViewCell *_cell;
    unsigned long long _scrollPosition;
}

+ (id)eventWithFirstResponder:(id)arg1 cell:(id)arg2 scrollPosition:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long scrollPosition; // @synthesize scrollPosition=_scrollPosition;
@property(readonly, nonatomic) YTCollectionViewCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (id)initWithFirstResponder:(id)arg1 cell:(id)arg2 scrollPosition:(unsigned long long)arg3;

@end

