//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GPDBResult : NSObject
{
    int _rowsAffected;
    long long _lastInsertRowID;
}

+ (id)resultWithLastInsertRowID:(long long)arg1 rowsAffected:(int)arg2;
@property(readonly, nonatomic) int rowsAffected; // @synthesize rowsAffected=_rowsAffected;
@property(readonly, nonatomic) long long lastInsertRowID; // @synthesize lastInsertRowID=_lastInsertRowID;
- (id)initWithLastInsertID:(long long)arg1 rowsAffected:(int)arg2;

@end

