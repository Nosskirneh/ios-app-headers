//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WMPNetworkMessagesManager : NSObject
{
    _Bool _alreadyShowingMessage;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool alreadyShowingMessage; // @synthesize alreadyShowingMessage=_alreadyShowingMessage;
- (void)stoppedShowingMessage;
- (void)showNetworkMessageWithDescription:(id)arg1;
- (id)init;

@end

