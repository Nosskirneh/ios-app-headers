//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol GOOSideViewItem;

@protocol GOOSideViewItemLayoutSource <NSObject>
- (CDStruct_60d9add8)layoutSpecForItem:(id <GOOSideViewItem>)arg1 bounds:(struct CGRect)arg2;
- (double)heightForItem:(id <GOOSideViewItem>)arg1 constrainedToWidth:(double)arg2;
@end
