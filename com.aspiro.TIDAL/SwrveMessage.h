//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, SwrveInAppCampaign, SwrveMessageController;

@interface SwrveMessage : NSObject
{
    SwrveMessageController *controller;
    SwrveInAppCampaign *campaign;
    NSNumber *messageID;
    NSString *name;
    NSNumber *priority;
    NSArray *formats;
}

@property(retain, nonatomic) NSArray *formats; // @synthesize formats;
@property(retain, nonatomic) NSNumber *priority; // @synthesize priority;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSNumber *messageID; // @synthesize messageID;
@property(nonatomic) __weak SwrveInAppCampaign *campaign; // @synthesize campaign;
@property(nonatomic) __weak SwrveMessageController *controller; // @synthesize controller;
- (void).cxx_destruct;
- (void)wasShownToUser;
- (_Bool)assetsReady:(id)arg1;
- (_Bool)supportsOrientation:(long long)arg1;
- (id)bestFormatForOrientation:(long long)arg1;
- (id)initWithDictionary:(id)arg1 forCampaign:(id)arg2 forController:(id)arg3;

@end

