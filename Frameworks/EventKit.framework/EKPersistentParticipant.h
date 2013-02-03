/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString;

@interface EKPersistentParticipant : EKPersistentObject <NSCopying> {
}

@property(readonly) NSString * UUID;
@property(copy) NSString * emailAddress;
@property(copy) NSString * externalID;
@property(copy) NSString * name;

+ (id)defaultPropertiesToLoad;

- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)emailAddress;
- (id)externalID;
- (unsigned int)hash;
- (id)init;
- (id)name;
- (id)owner;
- (void)setEmailAddress:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setName:(id)arg1;

@end