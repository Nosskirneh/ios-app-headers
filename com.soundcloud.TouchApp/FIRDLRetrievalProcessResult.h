//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRDynamicLink, NSError, NSString;

@interface FIRDLRetrievalProcessResult : NSObject
{
    FIRDynamicLink *_dynamicLink;
    NSError *_error;
    NSString *_message;
    NSString *_matchSource;
}

@property(readonly, copy, nonatomic) NSString *matchSource; // @synthesize matchSource=_matchSource;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) FIRDynamicLink *dynamicLink; // @synthesize dynamicLink=_dynamicLink;
- (void).cxx_destruct;
- (id)URLWithCustomURLScheme:(id)arg1;
- (id)initWithDynamicLink:(id)arg1 error:(id)arg2 message:(id)arg3 matchSource:(id)arg4;

@end

