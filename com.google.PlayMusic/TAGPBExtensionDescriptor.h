//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TAGPBEnumDescriptor;

__attribute__((visibility("hidden")))
@interface TAGPBExtensionDescriptor : NSObject
{
    struct TAGPBExtensionDescription *description_;
}

@property(readonly, retain, nonatomic) TAGPBEnumDescriptor *enumDescriptor;
@property(readonly, nonatomic) Class msgClass;
@property(readonly, nonatomic, getter=isMessage) _Bool message;
@property(readonly, nonatomic, getter=isPackable) _Bool packable;
@property(readonly, nonatomic, getter=isRepeated) _Bool repeated;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) unsigned int fieldNumber;
- (const char *)singletonNameC;
@property(readonly, nonatomic) NSString *singletonName;
- (id)initWithExtensionDescription:(struct TAGPBExtensionDescription *)arg1;

@end

