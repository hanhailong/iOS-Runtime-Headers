/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@class PKPhysicsBody;

@interface PKPhysicsContact : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGVector { 
        float dx; 
        float dy; 
    PKPhysicsBody *_bodyA;
    PKPhysicsBody *_bodyB;
    } _contactNormal;
    } _contactPoint;
    BOOL _didBegin;
    BOOL _didEnd;
    float _impulse;
}

@property(readonly) PKPhysicsBody * bodyA;
@property(readonly) PKPhysicsBody * bodyB;
@property(readonly) float collisionImpulse;
@property(readonly) struct CGVector { float x1; float x2; } contactNormal;
@property(readonly) struct CGPoint { float x1; float x2; } contactPoint;
@property BOOL didBegin;
@property BOOL didEnd;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)bodyA;
- (id)bodyB;
- (float)collisionImpulse;
- (struct CGVector { float x1; float x2; })contactNormal;
- (struct CGPoint { float x1; float x2; })contactPoint;
- (BOOL)didBegin;
- (BOOL)didEnd;
- (id)init;
- (void)setBodyA:(id)arg1;
- (void)setBodyB:(id)arg1;
- (void)setCollisionImpulse:(float)arg1;
- (void)setContactNormal:(struct CGVector { float x1; float x2; })arg1;
- (void)setContactPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDidBegin:(BOOL)arg1;
- (void)setDidEnd:(BOOL)arg1;

@end
