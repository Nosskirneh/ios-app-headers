//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class NSArray, NSString;

@interface ShareItemLoader : Loader
{
    int _shareItemType;
    NSArray *_theFriends;
    NSString *_itemId;
    NSString *_message;
}

@property int shareItemType; // @synthesize shareItemType=_shareItemType;
@property(copy) NSString *message; // @synthesize message=_message;
@property(copy) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain) NSArray *theFriends; // @synthesize theFriends=_theFriends;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (id)generateRequest;
- (id)initWithDelegate:(id)arg1 theFriends:(id)arg2 itemId:(id)arg3 message:(id)arg4 shareItemType:(int)arg5;
- (int)type;

@end

