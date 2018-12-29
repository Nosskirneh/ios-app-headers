//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;
@protocol SwrveMessageEventHandler;

@interface SwrveBaseConversation : NSObject
{
    id <SwrveMessageEventHandler> controller;
    NSNumber *conversationID;
    NSString *name;
    NSArray *pages;
}

+ (_Bool)isSystemFont:(id)arg1;
+ (id)fromJSON:(id)arg1 forController:(id)arg2;
@property(retain, nonatomic) NSArray *pages; // @synthesize pages;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSNumber *conversationID; // @synthesize conversationID;
@property(nonatomic) __weak id <SwrveMessageEventHandler> controller; // @synthesize controller;
- (void).cxx_destruct;
- (id)pageForTag:(id)arg1;
- (id)pageAtIndex:(unsigned long long)arg1;
- (void)wasShownToUser;
- (_Bool)isFontAssetMissing:(id)arg1 inCache:(id)arg2;
- (_Bool)assetsReady:(id)arg1;
- (id)updateWithJSON:(id)arg1 forController:(id)arg2;

@end

