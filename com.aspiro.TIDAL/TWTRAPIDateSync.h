//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHTTPURLResponse;

@interface TWTRAPIDateSync : NSObject
{
    NSHTTPURLResponse *_response;
}

@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (_Bool)sync;
- (id)initWithHTTPResponse:(id)arg1;

@end

