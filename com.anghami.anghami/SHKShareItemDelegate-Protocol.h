//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SHKItem, SHKSharer;

@protocol SHKShareItemDelegate <NSObject>
- (void)sharingCancelled;
- (_Bool)aboutToShareItem:(SHKItem *)arg1 withSharer:(SHKSharer *)arg2;
@end

