//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GMVGIPAppGroupsHolder : NSObject
{
    NSString *_sharedAppGroupName;
}

+ (id)sharedAppGroupName;
+ (id)guessApplicationGroup;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *sharedAppGroupName; // @synthesize sharedAppGroupName=_sharedAppGroupName;
- (void).cxx_destruct;
- (id)init;

@end

