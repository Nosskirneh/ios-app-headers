//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface BTFragment : NSObject
{
    NSString *_type;
    NSDictionary *_params;
}

+ (id)fragmentOfType:(id)arg1 withParameters:(id)arg2;
@property(readonly) NSDictionary *params; // @synthesize params=_params;
@property(readonly) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(id)arg1 withParameters:(id)arg2;

@end

