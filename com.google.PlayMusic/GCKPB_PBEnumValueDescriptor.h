//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GCKPB_PBEnumValueDescriptor : NSObject
{
    struct GCKPB_PBMessageEnumValueDescription *description_;
    NSString *name_;
}

@property(readonly, retain, nonatomic) NSString *name; // @synthesize name=name_;
@property(readonly, nonatomic) int number;
- (void)dealloc;
- (id)initWithEnumValueDescription:(struct GCKPB_PBMessageEnumValueDescription *)arg1 prefix:(id)arg2;

@end

