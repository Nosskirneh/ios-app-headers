//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BITStoreButtonData : NSObject
{
    _Bool _enabled;
    NSString *_label;
}

+ (id)dataWithLabel:(id)arg1 enabled:(_Bool)arg2;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)initWithLabel:(id)arg1 enabled:(_Bool)arg2;

@end

