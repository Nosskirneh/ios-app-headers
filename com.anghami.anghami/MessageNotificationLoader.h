//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class NSString;

@interface MessageNotificationLoader : Loader
{
    NSString *_extraKey;
    NSString *_messageID;
    NSString *_action;
    NSString *_notificationId;
}

@property(copy, nonatomic) NSString *notificationId; // @synthesize notificationId=_notificationId;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(copy, nonatomic) NSString *extraKey; // @synthesize extraKey=_extraKey;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (id)generateRequest;

@end
