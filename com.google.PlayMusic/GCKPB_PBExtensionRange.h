//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GCKPB_PBExtensionRange : NSObject
{
    struct GCKPB_PBMessageExtensionRangeDescription *description_;
}

@property(readonly, nonatomic) unsigned int end;
@property(readonly, nonatomic) unsigned int start;
- (id)initWithRangeDescription:(struct GCKPB_PBMessageExtensionRangeDescription *)arg1;

@end

