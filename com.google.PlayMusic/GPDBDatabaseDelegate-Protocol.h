//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPDBDatabase;

@protocol GPDBDatabaseDelegate <NSObject>

@optional
- (void)detectedCorruptionInDatabase:(GPDBDatabase *)arg1;
@end
