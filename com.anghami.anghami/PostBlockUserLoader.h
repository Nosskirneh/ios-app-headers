//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class NSString;

@interface PostBlockUserLoader : Loader
{
    NSString *_blockedUserId;
    NSString *_action;
}

@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *blockedUserId; // @synthesize blockedUserId=_blockedUserId;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (id)generateRequest;
- (int)type;

@end

