//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface GSCResponseOrError : NSObject
{
    id _response;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id response; // @synthesize response=_response;
- (void).cxx_destruct;
- (id)initWithError:(id)arg1;
- (id)initWithResponse:(id)arg1;

@end
