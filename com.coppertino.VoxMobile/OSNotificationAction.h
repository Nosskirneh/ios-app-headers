//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface OSNotificationAction : NSObject
{
    unsigned long long _type;
    NSString *_actionID;
}

@property(readonly) NSString *actionID; // @synthesize actionID=_actionID;
@property(readonly) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithActionType:(unsigned long long)arg1:(id)arg2;

@end

