//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface MPObjectSerializerConfig : NSObject
{
    NSDictionary *_classes;
    NSDictionary *_enums;
    NSArray *_enumDescriptions;
}

@property(readonly, nonatomic) NSArray *enumDescriptions; // @synthesize enumDescriptions=_enumDescriptions;
- (void).cxx_destruct;
- (id)typeWithName:(id)arg1;
- (id)classWithName:(id)arg1;
- (id)enumWithName:(id)arg1;
@property(readonly, nonatomic) NSArray *classDescriptions;
- (id)initWithDictionary:(id)arg1;

@end

