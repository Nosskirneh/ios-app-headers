//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface SwrveResourceManager : NSObject
{
    NSArray *abTestDetails;
    NSDictionary *resources;
}

@property(readonly) NSDictionary *resources; // @synthesize resources;
- (void).cxx_destruct;
- (id)abTestDetails;
- (void)setABTestDetailsFromDictionary:(id)arg1;
- (_Bool)attributeAsBool:(id)arg1 fromResourceWithId:(id)arg2 withDefault:(_Bool)arg3;
- (float)attributeAsFloat:(id)arg1 fromResourceWithId:(id)arg2 withDefault:(float)arg3;
- (int)attributeAsInt:(id)arg1 fromResourceWithId:(id)arg2 withDefault:(int)arg3;
- (id)attributeAsString:(id)arg1 fromResourceWithId:(id)arg2 withDefault:(id)arg3;
- (id)resourceWithId:(id)arg1;
- (void)setResourcesFromArray:(id)arg1;
- (id)init;

@end

