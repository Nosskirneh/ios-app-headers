//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSession;

@interface LP4Session : NSObject
{
    NSURLSession *_persistantSession;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSURLSession *persistantSession; // @synthesize persistantSession=_persistantSession;
- (void).cxx_destruct;
- (id)generatePersistantSession;

@end
