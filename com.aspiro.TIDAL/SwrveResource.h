//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface SwrveResource : NSObject
{
    NSDictionary *attributes;
}

@property(retain) NSDictionary *attributes; // @synthesize attributes;
- (void).cxx_destruct;
- (_Bool)getAttributeAsBool:(id)arg1 withDefault:(_Bool)arg2;
- (float)getAttributeAsFloat:(id)arg1 withDefault:(float)arg2;
- (int)getAttributeAsInt:(id)arg1 withDefault:(int)arg2;
- (id)getAttributeAsString:(id)arg1 withDefault:(id)arg2;
- (id)init:(id)arg1;

@end
