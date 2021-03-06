//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AMZNWebUIViewStrategy;

@interface AMZNWebUIController : NSObject
{
    unsigned long long _options;
    id <AMZNWebUIViewStrategy> _strategy;
}

+ (void)performBlockWithFirstPartyAppDisabled:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) id <AMZNWebUIViewStrategy> strategy; // @synthesize strategy=_strategy;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)dismiss;
- (_Bool)open:(id)arg1;
- (id)init;

@end

