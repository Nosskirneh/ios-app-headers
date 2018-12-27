//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface APEventBuilder : NSObject
{
    NSString *_builderName;
    long long _builderVersion;
    NSMutableDictionary *_builderAttributes;
}

+ (CDUnknownBlockType)builder;
@property(retain, nonatomic) NSMutableDictionary *builderAttributes; // @synthesize builderAttributes=_builderAttributes;
@property(nonatomic) long long builderVersion; // @synthesize builderVersion=_builderVersion;
@property(copy, nonatomic) NSString *builderName; // @synthesize builderName=_builderName;
- (void).cxx_destruct;
- (CDUnknownBlockType)build;
- (CDUnknownBlockType)addAttributes;
- (CDUnknownBlockType)addAttribute;
- (CDUnknownBlockType)attributes;
- (CDUnknownBlockType)version;
- (CDUnknownBlockType)name;
- (CDUnknownBlockType)click;

@end

