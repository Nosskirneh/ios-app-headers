//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DataURIBroadcastController : NSObject
{
    NSMutableDictionary *_uriPrefixStringToDelegateSetMap;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)prefixStringArrayForURI:(id)arg1;
- (void)broadcastChangeOnDataURI:(id)arg1;
- (void)registerDataURIDelegate:(id)arg1 forURI:(id)arg2;
- (id)init;

@end

