//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMEvent.h"

@class NSError;

@interface HAMNonFatalErrorEvent : HAMEvent
{
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1;
- (id)initWithPlayer:(id)arg1 error:(id)arg2;

@end

