//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AIError;

@interface APIError : NSObject
{
    AIError *error;
    unsigned long long api;
}

@property unsigned long long api; // @synthesize api;
@property(retain) AIError *error; // @synthesize error;
- (void).cxx_destruct;
- (id)initErrorForAPI:(unsigned long long)arg1 andError:(id)arg2;

@end

