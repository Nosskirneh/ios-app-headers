//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTShareTestManager;

@interface SPTShareDestinationUtility : NSObject
{
    id <SPTShareTestManager> _testManager;
}

+ (id)buildDeeplinkURLWithShareText:(id)arg1 forDestination:(id)arg2;
@property(retain, nonatomic) id <SPTShareTestManager> testManager; // @synthesize testManager=_testManager;
- (void).cxx_destruct;
- (_Bool)isStoryCompatableURI:(id)arg1;
- (_Bool)isDestination:(id)arg1 allowedForEntityURI:(id)arg2;
- (id)availableShareDestinationsForEntityURI:(id)arg1;
- (id)initWithTestManager:(id)arg1;

@end

